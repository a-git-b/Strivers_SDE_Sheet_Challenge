Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int n1=0,n2=0;
    Node *temp1=firstHead,*temp2=secondHead;
    while(temp1){
        n1++;
        temp1=temp1->next;
    }
    while(temp2){
        n2++;
        temp2=temp2->next;
    }
    temp1=firstHead;
    temp2=secondHead;
    if(n1>n2){
        for(int i=0;i<n1-n2;i++){
            temp1=temp1->next;
        }
    }
    else{
        for(int i=0;i<n2-n1;i++){
            temp2=temp2->next;
        }
    }
    while(temp1&&temp2){
        if(temp1==temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return NULL;

}
