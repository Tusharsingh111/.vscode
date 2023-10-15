// #include<iostream>
// using namespace std;
// int square(int s){
//     return s*s;
// }
// int main(){
//     cout<<"square is:"<<square(545)<<endl;
//     return 0;
// }
// #include<iostream>
// #include<string.h>
// using namespace std;
// class student
// {
// private:
//     int rollNo;
//     char name[10];
//     int marks;
// public:
//     static int objectCount;
//     student();
//     {
//         object count ++;
//     }
//     void get data()
// }
// cout<<"enter roll no:"<<endl;
// cin>>rollno;
// cout<<"enter name:"<<endl;
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"enter hexadecimal number=";
//     cin>>hex>>i;
//     cout<<"hexadecimal value="<<hex<<i<<endl;
//     cout<<"octal value="<<oct<<i<<endl;
//     cout<<"decimal value="<<dec<<i<<endl;
//     return 0;

// }
// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int age=22,rollno=9101;
//     cout<<setw(12)<<"my rollno is"<<setw(8)<<rollno<endl;
//     cout<<setw(12)<<"my age is"<<setw(8)<<age;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void sum(int,int);
// void sum(double,double);
// void sum(char,char);
// int main(){
//     int a=10,b=20;
//     double c=7.52,d=8.14;
//     char e='a',f='b';
//     sum(a,b);
//     sum(c,d);
//     sum(e,f);
// }
// void sum(int x,int y)
// {
//     cout<<"\n  sum of integers are "<,x+y;
// }
// void sum(double x, double y)
// {
//     cout<<"\n sum o ftwo floating no are "<<x+y;
// }
// void sum(char x,char y)
// {
//     cout<<"\n sum of character are "<<x+y;
// }
// return 0;

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string S1;
//     S1="Hello";
//     string S2="Hello world";
//     string S3("Hello world");
//     string S4;
//     S4=S1+S3+S2;
//     cout<<S4;
//     return 0;
// }
/*manipulate string objects
.insert()
.erase()
.replace()
.append()
.length()
.at()
.find()
.compare()
.subtract()*/
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string S1;
//     S1="Hello world";
//     string S2="1234";
//     string s3;
//     s3=S1.insert(5,S2);
//     s3=s3.erase(5,4);
//     s3=S1.replace(6,5,S2);
//     s3=S1.append(S2,6,5);
//     return 0;
// }
/*string characterstics
size()
length()
max_size()
empty()
swap()*/

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1,s2;
//     s1="hello world";
//     s2="good";
//     int a=s1.length();
//     cout<<"size"<<s1.size()<<endl;
//     cout<<"length"<<s1.length()<<endl;
//     cout<<"Max-size"<<s1.max_size()<<endl;
//     cout<<"empty"<<(s1.empty()?"yes":"no")<<endl;
//     cout<<"swap"<<swap(s1,s2)<<endl;
//     cout<<"value of s1"<<s1<<endl;
//     cout<<"value of s2"<<s2<<endl;
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1("12345");
//     string s2("abcde");
//     s1.insert(4,s2);
//     cout<<s1<<endl;
//     s1.erase(4,5);
//     cout<<s1<<endl;
//     s2.replace(1,3,s1);
//     cout<<s2<<endl;
//     s2.append(s1,2,3);
//     cout<<s2<<endl;
//     s1.swap(s2);
//     cout<<s2<<endl;
//     s2.find("a");
//     cout<<s2<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="bcme";
//     string s2="abcrome";
//     cout<<s1.compare(s2)<<endl;
//     cout<<s1.compare(2,2,s2,5,2);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int a[100],i,n,k,item;
//     cout<<"how many numbers to store in an array:";
//     cin>>n;
//     cout<<"enter the number:";
//     for(i=0;i<=n;i++)
//     cin>>a[i];
//     cout<<"enter the no.and its position:";
//     cin>>item>>k;
//     k=k-1;
//     for ( i = n-1; i>=k; i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[k]=item;
//     cout<<"contents of the array:\n";
//     for ( i = 0; i <=n; i++)
//     {
//         cout<<a[i];
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// inline int cube(int c){
//     return c*c*c;
// }
// int main(){
//     cout<<cube(7);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[100],i,n,k;
//     cout<<"numbers to store:"<<endl;
//     cin>>n;
//     cout<<"enter the number:"<<endl;
//     for ( i = 0; i < n; i++)
//     {
//         a[i]=a[i+1];
//     }
//     cout<<"content of array:"<<endl;
//     for ( i = 0; i < n-1; i++)
//     {
//         cout<<a[i];
//     }
    

    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[20],key,i,n,c=-1;
//     cout<<"array size:";
//     cin>>n;
//     cout<<"enter the elments";
//     for ( i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"enter elemnt to found";
//     cin>>key;
//     for ( i = 0; i < n; i++)
//     if (a[i]==key)
//     {
//         cout<<"enter the key found location";
//         c++;
//         break;
//     }
//     if (c==-1)
//     {
//         cout<<"elements not found in th elist:";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int ar[100],beg,mid,end,i,n,search,c=-1;
//     cout<<"size";
//     cin>>n;
//     cout<<"enter"<<n<<"numbers in ascendingnorder";
/*for matrix multiplication*/
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][2];
//     cout<<"enter elements"<<endl;
//     for (int i = 0; i < 2; i++){
//     for (int j = 0; j<2; j++)
//     {
//         cin>>a[i][j];
//     }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout<<a[i][j];
//             cout<<" ";
//         }
//         cout<<endl;
        
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][2],b[2][2],sum[2][2],mul[2][2];
//     cout<<"first matrix is:"<<endl;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout<<a[i][j];
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"second matrix is:"<<endl;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout<<b[i][j];
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"sum of matrix is"<<endl;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j<2; j++)
//         {
//             sum[i][j]=a[i][j]+b[i][j];
//             cout<<sum[i][j];
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int  j = 0; j < 2; j++)
//         {
//             mul[i][j]=0;
//             for (int k = 0; k < 2; i++)
//             {
//                 /* code */
//             }
            
//         }
        
//     }
    
    
    
// }

#include<iostream>
using namespace std;
class stack{
    public:
    char s[20];
    int top,max;
    stack();
    void push(char t);
    char pop();
    int isempty();
    char gettop();
    int insidestackoperatorpriority(char);
    int incomingoperatorpriority(char);
    void infixtopostfix(char infix[20]);
};
stack::stack()
{
    top=-1;
    max=20;
}
void stack::push(char t){
    if (top==max-1)
        cout<<"stack is overflow"<<endl;
    else
        s[++top]=t;
}
char stack::pop(){
    char ch;
    if(top==-1)
    cout<<"stack is underflow"<<endl;
    else{
        ch=s[top];
        top--;
    }
    return ch;
}
int stack::isempty(){
    if(top==-1)
    return 1;
    else
    return 0;
}
char stack::gettop(){
    char ch;
    if (isempty)
    cout<<"stack is empty"<<endl;
    else{
    ch=s[top];
    }
    return ch;
}
int stack::insidestackoperatorpriority(char ch){
    switch (ch)
    {
    case '+':
    case '-':
    return 1;
    case '*':
    case '/':
    return 2;
    case '^':
    return 3;
    case '(':
    return 0;
    case '#':
    return -1;
    }
    return 0;
}
int stack::incomingoperatorpriority(char ch){
    switch (ch)
    {
    case '+':
    case '-':
    return 1;
    case '*':
    case '/':
    return 2;
    case '^':
    return 3;
    case '(':
    return 4;
    }
    return 0;
}
void stack::infixtopostfix(char infix[20])
{
    stack sk;
    int i=0;
    char ch,x;
    sk.push('#');
    while (infix[i]!='\0')
    {
        ch=infix[i];
        i++;
        if(ch>='a' && ch<='z')
        cout<<ch;
    }
        else
        {
            if(ch==')')
        }
        while (sk.gettop()!='(')
        {
            x=sk.pop();
            cout<<x;
        }
        sk.pop();
    
}
int main(){

}






















































































