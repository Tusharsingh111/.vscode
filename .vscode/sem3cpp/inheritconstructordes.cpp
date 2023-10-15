/*single inheritance using constructor*/
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(int a){
//         cout<<"I am constructor for A"<<a<<endl;
//     }

// };
// class B: public A{
//     public:
//     B(int p):A(p){
//         cout<<"I am constructor for B"<<p<<endl;
//     }
// };
// int main(){
//     B ob(21);
// }
/*Multiple inheritance using Constructor*/
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"I am constructor for A"<<endl;
//     }
// };
// class B{
//     public:
//     B(){
//         cout<<"I am constructor for B"<<endl;
//     }
// };
// class C:public A,public B{
//     public:
//     C(){
//         cout<<"I am constructor for c"<<endl;
//     }
// };
// int main(){
//     C ob;
// }

#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am constructor for A"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"I am constructor for B"<<endl;
    }
};
class C:public A{
    public:
    C(){
        cout<<"I am constructor for C"<<endl;
    }
};
class D:public B{
    public:
    D(){
        cout<<"I am constructor for D"<<endl;
    }
};
class E:public C{
    public:
    E(){
        cout<<"I am constructor for D"<<endl;
    }
};
class F:public D,public E{
    public:
    F(){
        cout<<"I am constructor for D"<<endl;
    }
};
int main(){
    F ob;
}
