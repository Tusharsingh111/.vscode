// #include<iostream>
// using namespace std;
// class teacher{
//     int a=10;
//     protected:
//     int b=20;
//     public:
//     int c=30;
// };
// class parent{
//     int a=20;
//     protected:
//     int b=50;
//     public:
//     int c=30;

// };
// class student:public teacher,public parent{

// };
// int main(){
//     student s;
//     // cout<<s.a<<endl;
//     // cout<<s.b<<endl;
//     cout<<s.c<<endl;
//     return 0;

// }
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void show(){
//         cout<<"I am member of class A";
//     }
// };
// class B{
//     public:
//     void show(){
//         cout<<"member of class B";
//     }
// };
// class C: public A, public B{

// };
// int main(){
//     C.obj1;
//     obj1.A:: show();
//     return 0;
// }

#include<iostream>
using namespace std;
class mammals{
    public:
    void show(){
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals{
    public:
    void show(){
        cout<<"I am marineAnimal"<<endl;

    }
};
class BlueWhale: public mammals, public MarineAnimals{
    public:
    void show(){
    cout<<"I belong to both"<<endl;
    }
};
int main(){
    mammals ob1;
    MarineAnimals ob2;
    BlueWhale ob3;
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;

}