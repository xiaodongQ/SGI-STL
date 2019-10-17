<!--
 * @Description: 记录该fork学习过程
 * @Author: xd
 * @Date: 2019-10-12 08:24:44
 * @LastEditTime: 2019-10-17 11:41:31
 * @LastEditors: xd
 * @Note:
 -->
# SGI-STL学习笔记

## 开发测试环境

Oracle VM VirtualBox搭建的虚拟机

* 系统: CentOS Linux release 7.6.1810 (Core)
* gcc 版本 4.8.5 (GCC)

## 容器库

参考：
cppreference.com:
[容器库](https://zh.cppreference.com/w/cpp/container)

github repository website:
[容器(container)](https://github.com/steveLauwh/SGI-STL/tree/master/The%20Annotated%20STL%20Sources%20V3.3/container)

容器库是类模板与算法的汇集，允许程序员简单地访问常见数据结构，例如队列、链表和栈。

有三类容器——顺序容器(序列式容器)、关联容器和无序关联容器

### 顺序容器(序列式容器 sequence container)

* array         静态的连续数组(C++11 起) (固定大小类似T[N] 但不会退化为T*;各类容器接口)
* vector        动态的连续数组 (支持随机访问)
* deque         双端队列 (双向进出的连续空间， 支持随机访问)
* forward_list  单链表(C++11 起)
* list          双链表 (不支持随机访问，插入和删除元素: O(1)，不连续)

---
* heap (内含一个 vector) (完全二叉树，最大堆或最小堆)
* priority-queue (内含一个 heap)
* slist (非标准)
* stack (内含一个 deque) (adapter 配接器)
* queue (内含一个 deque) (adapter 配接器)

---

### 关联容器

* set           唯一键的集合，按照键排序  (内含一个 RB-tree)
* map           键值对的集合，按照键排序，键是唯一的 (内含一个 RB-tree)
* multiset      键的集合，按照键排序 (内含一个 RB-tree)
* multimap      键值对的集合，按照键排序 (内含一个 RB-tree)

---
* RB-tree (非公开)
* hashtable (非标准)
* hash_set (内含一个 hashtable) (非标准)
* hash_map (内含一个 hashtable) (非标准)
* hash_multiset (内含一个 hashtable) (非标准)
* hash_multimap (内含一个 hashtable) (非标准)

---


