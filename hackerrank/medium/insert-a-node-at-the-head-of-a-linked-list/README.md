# Insert a node at the head of a linked list

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

<sub>This challenge is part of a tutorial track by [MyCodeSchool](http://www.youtube.com/mycodeschool) and is accompanied by a video lesson.</sub> 

Given a pointer to the head of a linked list, insert a new node before the head.  The $next$ value in the new node should point to $head$ and the $data$ value should be replaced with a given value.  Return a reference to the new head of the list. The head pointer given may be null meaning that the initial list is empty.

**Function Description**  

Complete the function $insertNodeAtHead$ with the following parameter(s):  

- $SinglyLinkedListNode\ llist$: a reference to the head of a list  
- $data$:  the value to insert in the $data$ field of the new node  


**Input Format**

The first line contains an integer $n$, the number of elements to be inserted at the head of the list.  
The next $n$ lines contain an integer each, the elements to be inserted, one per function call.  

**Constraints**

- $1 \le n \le 1000$  
- $1 \le list[i] \le 1000$  


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-06-20T17:26:56.026Z  

```cpp

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* 
llist, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode
    (data);

    newNode->next = llist;

    return newNode;
}
#include <bits/stdc++.h>
```

---

[View on HackerRank](https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem)