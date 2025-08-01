---
title: "MouseEvent: initMouseEvent() method"
short-title: initMouseEvent()
slug: Web/API/MouseEvent/initMouseEvent
page-type: web-api-instance-method
status:
  - deprecated
browser-compat: api.MouseEvent.initMouseEvent
---

{{APIRef("UI Events")}}{{deprecated_header}}

The **`MouseEvent.initMouseEvent()`** method initializes the
value of a mouse event once it's been created (normally using the {{domxref("Document.createEvent()")}} method).

> [!WARNING]
> Do not use this method anymore as it is deprecated.
>
> Instead use specific event constructors, like {{domxref("MouseEvent.MouseEvent", "MouseEvent()")}}.
> The section on [Creating and dispatching events](/en-US/docs/Web/API/Document_Object_Model/Events#creating_and_dispatching_events) gives more information about the way to use these.

Events initialized in this way must have been created with the {{domxref("Document.createEvent()") }} method.
This method must be called to set the event
before it is dispatched, using {{ domxref("EventTarget.dispatchEvent()") }}.

## Syntax

```js-nolint
initMouseEvent(type, canBubble, cancelable, view,
                     detail, screenX, screenY, clientX, clientY,
                     ctrlKey, altKey, shiftKey, metaKey,
                     button, relatedTarget)
```

### Parameters

- `type`
  - : the string to set the event's {{domxref("Event.type", "type")}} to. Possible types
    for mouse events include: `click`, `mousedown`,
    `mouseup`, `mouseover`, `mousemove`,
    `mouseout`.
- `canBubble`
  - : whether or not the event can bubble. Sets the value of {{domxref("Event.bubbles")}}.
- `cancelable`
  - : whether or not the event's default action can be prevented. Sets the value of
    {{domxref("Event.cancelable")}}.
- `view`
  - : the event's AbstractView. You should pass the {{domxref("window")}} object here.
    Sets the value of {{domxref("UIEvent.view")}}.
- `detail`
  - : the event's mouse click count. Sets the value of {{domxref("UIEvent.detail")}}.
- `screenX`
  - : the event's screen x coordinate. Sets the value of
    {{domxref("MouseEvent.screenX")}}.
- `screenY`
  - : the event's screen y coordinate. Sets the value of
    {{domxref("MouseEvent.screenY")}}.
- `clientX`
  - : the event's client x coordinate. Sets the value of
    {{domxref("MouseEvent.clientX")}}.
- `clientY`
  - : the event's client y coordinate. Sets the value of
    {{domxref("MouseEvent.clientY")}}.
- `ctrlKey`
  - : whether or not <kbd>control</kbd> key was pressed during the Event. Sets the value
    of {{domxref("MouseEvent.ctrlKey")}}.

- `altKey`
  - : whether or not <kbd>alt</kbd> key was pressed during the Event. Sets the value of
    {{domxref("MouseEvent.altKey")}}.

- `shiftKey`
  - : whether or not <kbd>shift</kbd> key was pressed during the Event. Sets the value
    of {{domxref("MouseEvent.shiftKey")}}.

- `metaKey`
  - : whether or not <kbd>meta</kbd> key was pressed during the Event. Sets the value of
    {{domxref("MouseEvent.metaKey")}}.

- `button`
  - : the event's mouse {{domxref("MouseEvent.button", "button")}}.
- `relatedTarget`
  - : the event's [related EventTarget](/en-US/docs/Web/API/MouseEvent/relatedTarget). Only used
    with some event types (e.g., `mouseover` and `mouseout`). In
    other cases, pass `null`.

### Return value

None ({{jsxref("undefined")}}).

## Examples

```js
const event = document.createEvent("MouseEvents");
event.initMouseEvent(
  "click",
  true,
  true,
  window,
  0,
  0,
  0,
  80,
  20,
  false,
  false,
  false,
  false,
  0,
  null,
);
document.body.dispatchEvent(event);
```

## Specifications

{{Specifications}}

## Browser compatibility

{{Compat}}

## See also

- {{domxref("MouseEvent.MouseEvent()","MouseEvent()")}} constructor, the modern
  standard way of creating a {{domxref("MouseEvent")}}
- {{domxref("Event.initEvent()")}} is a simpler method serving a similar purpose. It
  is also obsolete and shouldn't be used any more.
