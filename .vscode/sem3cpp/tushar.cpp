// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     a=100;
//     cout<<"sizeofint :"<<sizeof(a)<<endl;
//     float b;
//     b=11.96666;
//     cout<<"sizeoffloat :"<<sizeof(b)<<endl;
//     short int si;
//     long int li;
//     cout<<"sizeofint :"<<sizeof(si)<<endl;
//     cout<<"sizeofint :"<<sizeof(li)<<endl;
    

// #include<iostream>
// using namespace std;
// int main(){
//     int num1=60;
//     double num2=256.783;
//     char ch='A';
//     int b;
//     cout<<b<<endl;
//     cout<<num1<<endl;
//     cout<<num2<<endl;
//     cout<<"character:"<<ch<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[7]={1,2,3,4,5,6,7},n,position,index;
//     for (int i = 0; i < 7; i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     cout<<"trversing in backward"<<endl;
//     for (int i = 6; i >0; i--)
//     {
//         cout<<a[i]<<endl;
//     }
//     char ch[4],item;
//     cout<<"\n enter the elements you want to insert"<<endl;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ch[i];
//     }
//     cout<<"\n elements after insertion"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<ch[i]<<endl;
//     }
//     cout<<"item to be searched"<<endl;
//     cin>>item;
//     for (int i = 0; i < n; i++)
//     {
//         if (ch[i]==item)
//         {
//             index=i;
//             break;
//         }
        
//     }
//     cout<<"elements found at"<<index<<endl;
//     cout<<"enter the position from where you want to delete element";
//     cin>>position;
//     for (int j = position; j<n-1; j++)
//     {
//         ch[j]=ch[j+1];

//     }
//     cout<<"new array"<<endl;
//     for (int j = 0; j<n-1; j++)
//     {
//         cout<<ch[j]<<endl;
//     }    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[100];
//     int l,h,mid,key,n;
//     int f=0;
//     cout<<"enter the size of array:";
//     cin>>n;
//     cout<<"enter the array element:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         cout<<"enter the key to search:";
//         cin>>key;
//         l=0; h=n-1;
//     }
//     while (l<=h)
//     {
//         mid=(l+h)/2;
//         if (key==a[mid])
//         {
//             cout<<"element found at position:"<<mid+1 <<endl;
//             f=1;
//             break;
//         }
//         else if(key<a[mid])
//         h=mid-1;
//         else
//         l=mid+1;
//     }
//     if (f==0)
//     {
//         cout<<"element not found"<<endl;

//     }
//     return 0;
    
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int temp;
//     int a[5]={34,98,12,45,2};
//     for (int i = 0; i < 5-1; i++)
//     {
//         for (int j = 0; j < 5-i; j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
            
//         }    
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int temp,minpos,n=5;
//     int a[5]={34,98,12,45,2};
//     for (int i = 0; i < n-1; i++)
//     {
//         minpos=i;
//         for (int j =i+1; j < n; j++)
//         {
//             if (a[j]<a[minpos])
//             {
//                 minpos=j;
//             }
            
//         }
//         if (minpos!=i)
//         {
//             temp=a[i];
//             a[i]=a[minpos];
//             a[minpos]=temp;

//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
// }
#include<iostream>
using namespace std;
int main(){
    int a[5]={10,5,2,53,1};
    int key,j;
    for (int i = 1; i < 5; i++)
    {
        key=a[i];
        j=i;
        while (j>0&&a[j-1]>key)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
}
















































































