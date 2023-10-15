// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int &ref=x;
//     x=20;
//     cout<<"x="<<x<<endl;
//     x=30;
//     cout<<"ref"<<ref<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void swap(int &x,int&y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     return;
// }
// int main(){
//     int a=100;
//     int b=200;
//     cout<<"before swap,value of a:"<<a<<endl;
//     cout<<"before swap,value of b:"<<b<<endl;
//     swap(a,b);
//     cout<<"after swap,value of a:"<<a<<endl;
//     cout<<"after swap,value of b:"<<b<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class array
// {
//     int *arr;
//     int size;
//     public:
//     void get_data(int n){
//         size=n;
//         arr=new int[size];
//         cout<<"\n enter elements:";
//         for (int i = 0; i < size; i++)
//         {
//             cin>>*(arr+i)
//         }
        
//     }
//     void add(){
//         int sum=0;
//         for (int i = 0; i < size; i++)
//         {
//             sum+=*(arr+i);
//         }
//         cout<<"\n sum of element=";
        
//     }

// };
// int main(){
//     array a;
//     int n;
//     cout<<"\n enter the number of elements:"<<endl;
//     cin>>n;
//     a.get_data(n);
//     a.add();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class X
// {
//     private:
//     int a;
//     public:
//     void set_a(int a){
//         this->a=a;
//     }
//     void print_a(){
//         cout<<"a="<<a<<endl;
//     }
// };
// int main(){~qws2E
//     X xobj;
//     int a=5;
//     xbj.Set_a(a);
//     xobj.print_a();
// }
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
};
class List
{
	private:
		Node* head;
	public:
		List()
		{
			head=NULL;
		}
	void insertlist(int d)
	{
		Node* n=new Node;
		n->data=d;
		n->next=NULL;
		if(head==NULL)
		{
			head=n;
		}
		else
		{
			Node* temp=head;
			while(temp->next=NULL)
			temp=temp->next;
			temp->next=n;
		}
	}
	void traversalList()
	{
		Node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<< " ";
			temp=temp->next;
		}
		cout<<endl;
	}
	void search(int d){
		Node* temp=head;
		while(temp!=NULL)
		{
			if(temp->data==d) {
				cout<<"Element found\n";
				break;
			}
			temp=temp->next;
		}
		if(temp==NULL){
			cout<<"No\n";
		}
	}
	void minimum() {
		Node* temp=head;
		int min = head->data;
		while(temp!=NULL) {
			if(temp->data<min)
			min = temp->data;
			temp=temp->next;
		}
		cout<<"Minimum element is "<<min;
	}
	void maximum(){
		Node* temp=head;
		int max=head->data;
		while(temp!=NULL) {
			if(temp->data>max)
			max=temp->data;
			temp=temp->next;
		}
		cout<<"Maximum element is "<<max<<"\n";
	}
	void deleteNode(int d)
	{
		Node*temp=head;
		Node* tempPrev=head;
		if(head->data==d)
		{
			head=head->next;
		}
		temp=temp->next;
	}
    };
    int main()
    {
    	List l;
    	int x;
    	cout<<"Enter 5 numbers";
    	for(int i=0;i<5;i++)
    	{
    		cin>>x;
    		l.insertlist(x);
		}
		cout<<"Enter number to be searched";
		cin>>x;
		l.traversalList();
		l.search(x);
		l.minimum();
		l.maximum();
		cout<<"Enter number to be deleted";
		cin>>x;
		l.deleteNode(x);
		cout<<"Linked list after deletion";
		l.traversalList();
	}