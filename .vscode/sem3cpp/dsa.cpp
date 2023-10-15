// #include<iostream>
// #include<math.h>
// using namespace std;
// const int max = 50;
// class postfix{
//     private:
//     int stack[max];
//     int top; float nn;
//     char *s;

//     public:
//     postfix();
//     void setexpr(char *str);
//     void push (int item);
//     int pop();
//     void calculate();
//     void show();
// };
// postfix :: postfix(){
//     top=-1;
// }
// void postfix :: setexpr (char *str){
//     s=str;
// }
// void postfix :: push (int item){
//     if (top==max-1)
//     {
//         cout<<"\nstack is full";
//     }
//     else
//     {
//         top++;
//         stack[top]=item;
//     } 
// }
// int postfix :: pop(){
//     if (top==-1)
//     {
//         cout<<endl<<"stack is empty";
//         return 0;
//     }
//     int data = stack[top];
//     top--;
//     return data;
// }
// void postfix ::calculate(){
//     int n1,n2,n3;
//     while (*s)
//     {
//         if (*s==''|| *s=='\t')
//         {
//             s++;
//             continue;
//         }
//         if (isdigit(*s))
//         {
//             nn=*s-'0';
//             push(nn);
//         }
//         else
//         {
//             n1=pop();
//             n2=pop();
//             switch (*s)
//             {
//             case  '+':
//             n3=n2-n1;
//             break;
//             case '-':
//             n3=n2-n2;
//             break;
//             case '/':
//             n3=n2/n1;
//             break;
//             case '*':
//             n3=n2*n1;
//             break;
//             case '%':
//             n3=n2%n1;
//             break;
//             case '^':
//             n3=pow(n2,n1);
//             break;

//             default:
//             cout<<"unknown operator";
//             exit(1);}
//             push (n3);}
//             s++;}}
//             void postfix :: show(){
//                 nn=pop();
//                 cout<<"result is :"<<nn;
//             }

// int main(){
//     char expr[max];
//     cout<<"\nenter the postfix expression to be evaluated:";
//     cin.getline(expr,max);
//     postfix q;
//     q.setexpr(expr);
//     q.calculate();
//     q.show();
//     return 0;
// }



#include<iostream>
using namespace std;
struct employee
{
    char name[50];
    int age;
    float salary;
};
int main(){
    employee e1;
    cout<<"enter name";
    cin.get(e1.name,50);
    cout<<"age";
    cin>>(e1.age);
    cout<<"salary";
    cin>>(e1.salary);
    cout<<"displaying info"<<endl;
    cout<<"name:"<<e1.name<<endl;
    cout<<"salary"<<e1.salary<<endl;
    cout<<"age"<<e1.age<<endl;
    return 0;
}
