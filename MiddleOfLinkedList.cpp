Node *findMiddle(Node *head) {
    Node*fp,*sp;
    fp=sp=head;
    while(fp!=NULL&&fp->next!=NULL){
        sp=sp->next;
        fp=fp->next->next;
    }
    return sp;

}