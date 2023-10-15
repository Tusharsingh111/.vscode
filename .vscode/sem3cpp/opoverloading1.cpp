// #include<iostream>
// using namespace std;

// class abc{
//     private:
//     int x;
//     int y;
//     int z;
//     public:
//     abc(int a,int b,int c){
//         x=a;
//         y=b;
//         z=c;
//     }
//     void display(){
//         cout<<x;
//         cout<<y;
//         cout<<z<<"\n";
//     }
//     void operator-(){
//         x=-x;
//         y=-y;
//         z=-z;
//     }
// };
// int main(){
//     abc s(10,-20,30);
//     cout<<"s:";
//     s.display();
//     return (0);
// }


/*prblm2*/
// #include<iostream>
// using namespace std;
// class point{
//     int x,y;
//     public:
//     point(){
//         x=0;y=0;
//     }
//     point(int i,int j){
//         x=i; y=j;
//     }
//     point operator -();
//     void display(){
//         cout<<x<<"\t"<<y;
//     }
// };
// point point::operator-(){
//     x=-x;
//     y=-y;
// }
// int main(){
//     point o1(10,10);
//     -o1;
//     o1.display();
// }

/*program to overload +(addition)op*/
// #include<iostream>
// using namespace std;
// class sum{
//     public: int b,a;
//     sum(){
//         b=50;
//     }
//     void set_data(){
//         cout<<"enter a:";
//         cin>>a;
//     }
//     int operator+(sum s1){
//         return(a+s1.b);
//     }
// };
// int main(){
//     int d;
//     sum s,t;
//     s.set_data();
//     d=s+t;
//     cout<<"sum is:"<<d;
// }
/*ca-2 syllabus up to operator overloading*/
/*addition of complex numbers*/
// #include<iostream>
// using namespace std;
// class complex{
//     int x,y;
//     public:
//     complex(){
//         x=10; y=20;
//     }
//     complex(int a,int b){
//         x=a; y=b;
//     }
//     complex operator+(complex c){
//         complex temp;
//         temp.x=x+c.x;
//         temp.y=y+c.y;
//         return(temp);
//     }
//     void show(){
//         cout<<x<<"+i"<<y;
//     }
// };
// int main(){
//     complex c1(2,3),c2(4,5),c3;
//     c3=c1+c2;
//     c3.show();
// }

#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    float fees;
    public:
    student(int a,float m){
        rollno=a;
        fees=m;
    }
    operator int(){
        return(rollno);
    }
    operator float(){
        return(fees);
    }
};
int main(){
    int j;
    float f;
    student st(5,4200.50);
    j=st;
    f=st;
    cout<<j<<endl;
    cout<<f<<endl;
}