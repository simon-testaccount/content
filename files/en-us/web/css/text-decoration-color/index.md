---
title: text-decoration-color
slug: Web/CSS/text-decoration-color
page-type: css-property
browser-compat: css.properties.text-decoration-color
sidebar: cssref
---

The **`text-decoration-color`** [CSS](/en-US/docs/Web/CSS) property sets the color of decorations added to text by {{ cssxref("text-decoration-line") }}.

The color applies to decorations, such as underlines, overlines, strikethroughs, and wavy lines like those used to mark misspellings, in the scope of the property's value.

{{InteractiveExample("CSS Demo: text-decoration-color")}}

```css interactive-example-choice
text-decoration-color: red;
```

```css interactive-example-choice
text-decoration-color: #21ff21;
```

```css interactive-example-choice
text-decoration-color: rgb(255 90 255);
```

```css interactive-example-choice
text-decoration-color: hsl(70 100% 40%);
```

```css interactive-example-choice
text-decoration-color: currentColor;
```

```html interactive-example
<section id="default-example">
  <p>
    I'd far rather be
    <span class="transition-all" id="example-element">happy than right</span>
    any day.
  </p>
</section>
```

```css interactive-example
p {
  font: 1.5em sans-serif;
}

#example-element {
  text-decoration-line: underline;
}
```

CSS does not provide a direct mechanism for specifying a unique color for each line type. This effect can nevertheless be achieved by nesting elements, applying a different line type to each element (with the {{cssxref("text-decoration-line")}} property), and specifying the line color (with `text-decoration-color`) on a per-element basis.

## Syntax

```css
/* <color> values */
text-decoration-color: currentcolor;
text-decoration-color: red;
text-decoration-color: #00ff00;
text-decoration-color: rgb(255 128 128 / 50%);
text-decoration-color: transparent;

/* Global values */
text-decoration-color: inherit;
text-decoration-color: initial;
text-decoration-color: revert;
text-decoration-color: revert-layer;
text-decoration-color: unset;
```

### Values

- {{cssxref("&lt;color&gt;")}}
  - : The color of the line decoration.

## Accessibility

It is important to ensure that the contrast ratio between the color of the text, the background the text is placed over, and the text decoration line is high enough that people experiencing low vision conditions will be able to read the content of the page. Color contrast ratio is determined by comparing the luminosity of the text and background color values.

Color alone should not be used to convey meaning. For example, change of text and text-decoration-color alone is not enough to indicate a link has focus.

- [WebAIM: Color Contrast Checker](https://webaim.org/resources/contrastchecker/)
- [MDN Understanding WCAG, Guideline 1.4 explanations](/en-US/docs/Web/Accessibility/Guides/Understanding_WCAG/Perceivable#guideline_1.4_make_it_easier_for_users_to_see_and_hear_content_including_separating_foreground_from_background)
- [Understanding Success Criterion 1.4.3 | W3C Understanding WCAG 2.0](https://www.w3.org/TR/UNDERSTANDING-WCAG20/visual-audio-contrast-contrast.html)

## Formal definition

{{CSSInfo}}

## Formal syntax

{{csssyntax}}

## Examples

### Basic example

```html
<p>
  This paragraph has <s>some erroneous text</s> inside it that I want to call
  attention to.
</p>
```

```css
p {
  text-decoration-line: underline;
  text-decoration-color: cyan;
}

s {
  text-decoration-line: line-through;
  text-decoration-color: red;
  text-decoration-style: wavy;
}
```

{{ EmbedLiveSample('Examples') }}

## Specifications

{{Specifications}}

## Browser compatibility

{{Compat}}

## See also

- When setting multiple line-decoration properties at once, it may be more convenient to use the {{cssxref("text-decoration")}} shorthand property instead.
- The {{cssxref("&lt;color&gt;")}} data type
- Other color-related properties: {{cssxref("background-color")}}, {{cssxref("border-color")}}, {{cssxref("outline-color")}}, {{cssxref("text-emphasis-color")}}, {{cssxref("text-shadow")}}, {{cssxref("caret-color")}}, and {{cssxref("column-rule-color")}}
