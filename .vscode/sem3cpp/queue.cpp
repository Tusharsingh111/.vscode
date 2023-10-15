// #include<iostream>
// using namespace std;
// int queue[100],n=100,front=-1,rear=-1;
// void Insert(){
// int val;
// if (rear == n - 1)
// cout<<"Queue Overflow"<<endl;
// else{
//     if(front==-1)
//     front=0;
//     cout<<"Insert the element in queue:"<<endl;
//     cin>>val;
//     rear++;
//     queue[rear]=val;
    
// }
// }
// void Delete(){
//     if (front == -1){
//         cout<<"Queue Underflow";
//         return;
//     }
//     else{
//         cout<<"element deleted from queue is:"<<queue[front]<<endl;
//         front++;
//     }
// }
// void Display(){
//     if (front == -1)
//     cout<<"Queue is empty"<<endl;
//     else{
//         cout<<"Queue elements are:";
//         for(int i=front;i<=rear;i++)
//         cout<<queue[i]<<" ";
//         cout<<endl;
//     }
// }
// int main(){
//     int ch;
//     cout<<"1) Insert element to queue"<<endl;
//     cout<<"2) Delete element from queue"<<endl;
//     cout<<"3) Display all the elements of queue"<<endl;
//     cout<<"4) Exit"<<endl;
//     do{
//         cout<<"enter your choice:"<<endl;
//         cin>>ch;
//         switch(ch){
//             case 1: Insert();
//             break;
//             case 2: Delete();
//             break;
//             case 3: Display();
//             break;
//             case 4: cout<<"Invalid choice"<<endl;
//         }
//     }while(ch!=4);
//     return 0;
    
// }

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class queue{
    node *front,*rear;
    public:
    queue(){
        front=rear=NULL;
    }
    void enqueue(int elem){
        node *newnode;
        newnode = new node;
        newnode ->data=elem;
        newnode ->next=NULL;
        
        if(front==NULL)
            front = rear = newnode;
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
    void dequeue(){
        node *temp;
        if(front == NULL)
        cout<<"queue is empty";
        else{
            temp=front;
            front = front ->next;
            delete temp;
        }
    }
    void show(){
        node *temp;
        temp=front;
        while(temp!=NULL){
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
        
    }
};
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout<<"queue after inserting the 1st value is:";
    q.show();
    q.enqueue(4);
    cout<<"queue after inserting the second value is:";
    q.show();
    q.dequeue();
    cout<<"queue after deleting a value from the queue:";
    q.show();
}
