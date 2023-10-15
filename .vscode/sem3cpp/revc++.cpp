// #include<iostream>
// using namespace std;
// void swap(int& first,int& second){
//     int temp=first;
//     first=second;
//     second=temp;
// }
// int main(){
//     int a=2,b=3;
//     swap(a,b);
//     cout<<a<<"\n";
//     cout<<b;
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *ptr;
//     ptr=&x;
//     cout<<ptr<<endl;
//     ptr=ptr+1;
//     cout<<x<<endl;
//     cout<<ptr;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x=4;
//     void *ptr;
//     ptr=&x;
//     cout<<*ptr;
// }
/*pointer within class*/
// #include<iostream>
// using namespace std;
// class array{
//     int *arr;
//     int size;
//     public:
//     void get_data(int n){
//         size=n;
//         arr=new int[size];
//         cout<<"\nenter elements:";
//         for (int i = 0; i < size; i++)
//         {
//             cin>>*(arr+i);
//         }
        
//     }
//     void add(){
//         int sum=0;
//         for (int i = 0; i < size; i++)
//         {
//             sum+=*(arr+i);
//             sum=sum+*(arr+i);
//         }
//         cout<<"\nSum of elements="<<sum;   
//     }
// };
// int main(){
//     array a;
//     int n;
//     cout<<"\n Enter the number of elements:"<<endl;
//     cin>>n;
//     a.get_data(n);
//     a.add();
// }

// #include<iostream>
// using namespace std;
// class A{
//     int x;
//     public:
//     void getdata(){
//         cout<<"enter value for x:"<<endl;
//         cin>>x;
//     }
//     void showdata(){
//         cout<<"entered value is:"<<x<<endl;
//     }
// };
// int main(){
//     A obj;
//     A *ptr;
//     ptr=&obj;
//     ptr->getdata();
//     ptr->showdata();
//     (*ptr).getdata();
//     (*ptr).showdata();
// }

#include<iostream>
using namespace std;
int main(){
    int *ptr;
    cout<<*ptr;
    return 0;
}