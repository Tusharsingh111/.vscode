// #include<iostream>
// using namespace std;
// class rectangle{
//     private:
//     int length,breadth;
//     public:
//     rectangle(int a,int b)
//     {
//         length=a,breadth=b;

//     }
//     int area()
//     {
//         int a=(length*breadth);
//         cout<<"area is:"<<a;
//     }
// };
// int main(){
//     rectangle r1(5,6);
//     r1.area();
// }

/*default constructor*/

// #include<iostream>
// using namespace std;
// class rectangle{
//     private:
//     int l,b;
//     public:
//     rectangle(int x=12,int y=34){
//         l=x;
//         b=y;
//     }
//     int area(){
//         return(l*b);
//     }
// };
// int main(){
//     rectangle r;
//     cout<<"area is:"<<r.area();
//     rectangle r1(45,67);
//     cout<<"\narea is:"<<r1.area();
// }


/*copy constructor initialize the object by using the */

// #include<iostream>
// using namespace std;
// class counter{
//     int c;
//     public:
//     counter(int a){
//         c=a;
//     }
//     counter(counter &ob){
//         cout<<"copy constructor invoked";
//     }
//     c.ob;
// };
// void show(){
//     cout<<c;
// };

// int main(){
//     counter c1(10);
//     counter c2(c1);
//     c1.show();
//     c2.show();
// }


/*initializer list*/

// using namespace std;
// #include<iostream>
// class rectangle
// {
//     int l,b;

//     public:
//     rectangle(int x,int y)l(x),b(y) {}
//     int area(){
//         return (l*b);
//     }

// };
// int main(){
//     rectangle r(12,34);
//     cout<<"area is"<<r.area();
// }


