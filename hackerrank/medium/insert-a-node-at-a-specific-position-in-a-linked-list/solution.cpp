
    (data);
    // insert at head
    if (position == 0) {
        newNode->next = llist;
        return newNode;
    }

    SinglyLinkedListNode* curr = llist;

    // move to node before insertion point
    for (int i = 0; i < position - 1; i++) {
        curr = curr->next;
    }

    // insert
    newNode->next = curr->next;
    curr->next = newNode;

    return llist;
}
