int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* mainhead=head;
    SinglyLinkedListNode* latehead=head;
    int index=0;
    while(mainhead!=NULL)
    {
        mainhead=mainhead->next;
        if(index>positionFromTail)
        latehead=latehead->next;
        else
        index++;
    }
    return latehead->data;

    
}