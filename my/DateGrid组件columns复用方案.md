[TOC]

# 问题
多个页面的表格配置项存在大部分相同，但是少部分不同的情况。

这是主页面的配置项：
```js
const columns = [
    {header:'h1',bind:'b1',width:100,align:'left',sortable:true},
    {header:'h2',bind:'b2',width:100,align:'left',sortable:true},
    {header:'h3',bind:'b3',width:100,align:'left',sortable:true},
    {header:'h4',bind:'b4',width:100,align:'left',sortable:true},
    {header:'h5',bind:'b5',width:100,align:'left',sortable:true},
]
```

## 1. 增加项
假设在另一个页面中需要复用这个配置，但配置内容略有不同

可能是在任意位置插入，插入内容：
```js
 {header:'h-insert',bind:'b-insert',width:100,align:'left',sortable:true},
```

## 2. 部分使用
只需要其中的部分内容，比如需要使用`1-3-5`项

## 3. 拆解使用
类似场景2，比如现在有三个页面：<br/>
其中A页面需要`h2`、`h5`，B页面需要`h1`、`h4`，C页面需要`h3`

## 4. 修改部分属性
假设其他内容完全一样，仅`h3`的`bind`需要改为`b3-update`

## 5. 调整顺序
比如将顺序调整为`3-4-1-5-2`这种，属性与源配置完全相同

## 组合使用
以上场景可能是复数存在的，比如说：
- 需要1、2、4内
- 插入 2-2、3-1、6
- 更新2的部分属性
- 调整顺序为3-1、4、1、2、2-2、6

...场景过多，不一一列举

因为存在的场景很多，主要存在的问题是
1. 复用的方式不统一
2. 难以满足复数需求
3. 部分复用方案存在较严重的缺陷
4. 缺乏测试，并不特别稳定

为解决这个问题，所以推出了`MergeColumns`类，优点如下：
- 可以满足以上需求
- 支持链式调用，满足复数需求
- 根据实际使用场景，提供了一些简易API，如`tail`、`head`以方便调用
- 统一，便于维护
- 写了详尽的测试，相比于现写的更稳定和安全