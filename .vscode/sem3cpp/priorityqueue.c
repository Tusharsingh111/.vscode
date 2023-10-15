#include<iostream>
using namespace std;
struct node{
    int p;
    int info;
    node *link;
};
class priority_queue{
    private:
    node *f;
    public:
    priority_queue(){
        f=NULL;
    }
    void insert(int i,int p){
        node *t, *q;
        t=new node;
        t->p=p;
        if (f=NULL || p<f->p){
        t->link=f;
        f=t;
        }else{
            q=f;
            while (q->link !=NULL && q->link->p <=p)
            q = q->link;
           
            t->link=q->link;
            q->link=t;
        }
    }
    void del(){
        node *t;
        if(f==NULL)
        cout<<"QUEUE underflow\n";
        else{
            t=f;
            cout<<"Deleted item is: "<<t->info<<endl;
            f=f->link;
            free(t);
        }
    }
    void show(){
        node *ptr;
        ptr = f;
        if(f==NULL)
        cout<<"Queue is empty\n";
        else{
        cout<<"Queue is:\n";
        cout<<"Priority Item\n";
        while(ptr!=NULL){
            cout<<ptr->p<<" "<<ptr->info<<endl;
            ptr=ptr->link;
        }
        }
    }
};

int main(){
    int c,i,p;
    priority_queue pq;
    do{
        cout<<"1.Insert\n";
        cout<<"2.delete\n";
        cout<<"3.display\n";
        cout<<"4.exit\n";
        cout<<"enter your choice:";
        cin>>c;
        switch(c)
        {
            case 1:
            cout<<"input the item value to be added in the queue: ";
            cin>>i;
            cout<<"Eter its priority: ";
            cin>>p;
            pq.insert(i,p);
            break;
            case 2:
            pq.del();
            break;
            case 3:
            pq.show();
            break;
            case 4:
            break;
            default:
            cout<<"wrong choice\n";
        }
        
    }
    while(c!=4); 
    return 0;
}