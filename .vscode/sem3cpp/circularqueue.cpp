#include<iostream>
using namespace std;
int cqueue[5];
int front=-1,rear=-1,n=5;
void insertCQ(int val){
    if ((front==0 && rear==n-1))||(front == rear+1)
    {
        cout<<"Queue Overflow\n";
        return;
    }
    if (front == -1)
    {
        
    }
    
}