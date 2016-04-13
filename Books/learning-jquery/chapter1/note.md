## Why jQuery

jQuery 继承了 CSS 的选择符的优势，清晰表达文档结构。且具有可扩展性。重要的，jQuery 抽象了浏览器的不一致性，在复杂的浏览器兼容环境中提供抽象层来方便执行任务。隐式迭代。提供了连缀的编程方式。

## jQuery 能做什么

- 提供类似 CSS 的选择符机制，取得文档中的元素。
- 提供跨浏览器的元素样式修改。
- 改变文档内容。
- 影响用户交互操作。
- 提供部分内置的动态效果。
- Ajax 跨浏览器的简明支持。

## $()

$() 函数接收一个字符串参数，返回一个 jQuery 对象实例。jQuery 对象中封装零个或多个 DOM　元素，并允许用多个不同的方法与之进行交互。

addClass() 与 removeClass() 方法用于为元素添加或移除一个类。

## $(document).ready()

$(document).ready() 方法使在 DOM　加载完毕后调用某个函数，而不必等待其它资源全部加载。

.ready() 的参数可以是一个已定义的函数的引用，也可以接收一个匿名函数。

```javascript
function addActiveClass() {
    $('div.element').addClass('active');
}

$(document).ready(addActiveClass);

$(document).ready(function() {
    $('div.element').removeClass('active');
});
```