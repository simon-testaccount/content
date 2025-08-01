---
title: StorageArea.remove()
slug: Mozilla/Add-ons/WebExtensions/API/storage/StorageArea/remove
page-type: webextension-api-function
browser-compat: webextensions.api.storage.StorageArea.remove
sidebar: addonsidebar
---

Removes one or more items from the storage area.

This is an asynchronous function that returns a [`Promise`](/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise).

## Syntax

```js-nolint
let removingItem = browser.storage.<storageType>.remove(
  keys             // string, or array of strings
)
```

Where `<storageType>` is one of the writable storage types — {{WebExtAPIRef("storage.local")}}, {{WebExtAPIRef("storage.session")}}, or {{WebExtAPIRef("storage.sync")}}.

### Parameters

- `keys`
  - : A string, or array of strings, representing the key(s) of the item(s) to be removed.

### Return value

A [`Promise`](/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise) that will be fulfilled with no arguments if the operation succeeded. If the operation failed, the promise will be rejected with an error message.

## Examples

Remove a single item:

```js
function onRemoved() {
  console.log("OK");
}

function onError(e) {
  console.log(e);
}

let removeKitten = browser.storage.sync.remove("kitten");
removeKitten.then(onRemoved, onError);
```

{{WebExtExamples}}

## Browser compatibility

{{Compat}}

> [!NOTE]
> This API is based on Chromium's [`chrome.storage`](https://developer.chrome.com/docs/extensions/reference/api/storage) API. This documentation is derived from [`storage.json`](https://chromium.googlesource.com/chromium/src/+/master/extensions/common/api/storage.json) in the Chromium code.
