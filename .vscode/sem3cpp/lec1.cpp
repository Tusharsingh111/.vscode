// #include<iostream>
// using namespace std;
// int main(){
//     int n1=10;
//     int n2=5;
//     int n3=20;
//     if (n1>n2 && n1>n3)
//     {
//         cout<<"the greatest on is:"<<n1;
//     }
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     bool is_prime +true;

//     cin>>n;
//     if (n==0 || n==1)
//     {
//         is_prime= false;
//     }
//     for (int i = 3; i <= n/2; i++)
//     {
//         if (n%i==0)
//         {
//             is_prime = false;
//             break;
//         }
        
//     }
//     if (is_prime)
//     {
//         cout<<n<<"is a prime number";
//     }else{
//         cout<<n<<"is not a prime number";
//     }
    
    
//     cout<<"enter the number:"<<n;
//     return 0;   
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int t1=0,t2=1,nextTerm=0,n;
//     cout<<"enter the number of terms:";
//     cin>>n;
//     cout<<"fibonacci series:"<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i==1)
//         {
//             cout<<t1<<",";
//             continue;
//         }
//         if (n==2)
//         {
//             cout<<t2<<",";
//             continue;
//         }
//         nextTerm =t1 +t2;
//         t1=t2;
//         t2=nextTerm;
//         cout<<nextTerm<<",";  
//     }
//     return 0;

// }



// #include<iostream>
// using namespace std;
// class item
// {
// int number;
// float cost;
// public:
// void getdata(int a, float b);
// void putdata(void)
// {
//     cout<<"number:"<<number<<"\n";
//     cout<<"cost:"<<cost<<"\n";
// }

// };
// void item :: getdata(int a, float b)
// {
//     number=a;
//     cost=b;

// }
// int main(){
//     item x;
//     cout<<"\n object x"<<"\n";
//     x.getdata(100,299.95);
//     x.putdata();
//     item y;
//     cout<<"\n object y"<<"\n";
//     y.getdata (200,195.22);
//     y.putdata();
//     return 0;
// }
// 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     int i=1;
//     while(n>0){
//         i=n*i;
//     }
//     n--;
//     cout<<"the factorial of"<<n<<"is<<i";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n , reversed_number=0,remainder,temp;
//     cout<<"enter an integer: "<<endl;
//     cin>>n;
//     temp=n;
//     while (n!=0)
//     {
//         remainder = n%10;
//         reversed_number = reversed_number*10+remainder;
//         n/=10;

//     }
//     cout<<"the revverse number is "<<reversed_number<<endl;
//     if (temp==reversed_number){
//         cout<<"the number is palindrome";
//     }
//     else{
//         cout<<"the number is not palindrome";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for ( i = 0; i < count; i++)
//         {
//             /* code */
//         }
        
//     }
    
// }
// #include<iostream>
// using namespace std;
// struct employee{
//     char name[50];
//     int age;
//     float salary;
// };
// int main(){
//     employee e1;
//     cout<<"enter name:";
//     cin.get(e1.name,50);
//     cout<<"enter age";
//     cin>>e1.salary;
//     cout<<"\nDisplaying info:"<<endl;
//     cout<<"name:"<<e1.name<<endl;
//     cout<<"age:"<<e1.salary<<endl;
//     cout<<"salary:"<<e1.age<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// union data
// {
//     int ivalue;
//     float fvalue;
//     char cvalue;
// };
// int main(){
//     data myData;
//     myData.ivalue=42;
//     cout<<"integer value:"<<myData.ivalue<<endl;
//     myData.fvalue=3.14f;
//     cout<<"float value:"<<myData.fvalue<<endl;
//     myData.cvalue='A';
//     cout<<"char value:"<<myData.cvalue<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// union datatype
// {
//     int isize;
//     double dsize;
// };sizeUnion;
// struct datatype2
// {
//     int isize;
//     double dsize;
// };sizeStruct;
// itn main(){
//     cout<<"size of union"<<sizeof(sizeUnion)<<endl;
//     cout<<"size of structure"<<sizeof(sizeStruct)<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// struct emp
// {
//     string name;
// };
// int main(){
//     emp e[5];
//     int i;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"enter name:"<<i+1;
//         cin>>e[i].name;
//     }
//     cout<<"\n Name of emp";
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<e[i].name<<endl;
//     }
//     cout<<endl;
//     return 0;
    
    
// }
// #include<iostream>
// using namespace std;
// union data
// {
//     int ivalue;
//     char cvalue;
//     float fvalue;
//     double dvalue;
// };
// int main(){
//     const int size=5;
//     data dataArray[size];
//     dataArray[0].ivalue=42;
//     dataArray[1].cvalue='A';
//     dataArray[2].fvalue=3.14;
//     dataArray[3].dvalue=1.000;

//     cout<<"array union"<<endl;
//     for (int  i = 0; i < size; ++i)
//     {
//         cout<<"index"<<i<<":";

//         if (i%3==0){
//         cout<<"int value"<<dataArray[i].ivalue<<endl;
//         }
//         else if (i%3==1)
//         {
//             cout<<"char value"<<dataArray[i].cvalue<<endl;
//         }
//         else if (i%3==2)
//         {
//             cout<<"float value"<<dataArray[i].fvalue<<endl;
//         }
        
//         else{
//             cout<<"double value"<<dataArray[i].dvalue<<endl;
//         }
        
        
//     }
//     return 0;
    

// }
// #include<iostream>
// using namespace std;
// {
//     enum days{sun,mon,tues,wed,thur,fri,sat}
//     days day1,day2;
//     day1=sun;
//     day2=fri;
//     cout<<day1<<"\t"<<day2;
//     if (day1>day2)
//     {
//         cout<<"day1 comes aftr day2";

//     }
//     else{
//         cout<<"day2 comes after day1";
//     }
    
// }
















































