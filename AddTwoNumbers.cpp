Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node*head=new Node();
    Node*temp=head;
    int carry=0;
    while(num1||num2||carry!=0){
       int sum=0;
       if(num1!=NULL){
           sum+=num1->data;
           num1=num1->next;
       }
       if(num2!=NULL){
           sum+=num2->data;
           num2=num2->next;
       }
       sum+=carry;
       carry=sum/10;
       Node*nn=new Node(sum%10);
       temp->next=nn;
       temp=nn;
    }
    return head->next;
}
