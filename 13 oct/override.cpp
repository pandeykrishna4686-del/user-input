#include<iostream>
using namespace std;
class student{
public: //overloading
void add(int a){
cout<<"value of a is " <<a<<endl;
};
void add(int a,int b,int c){
cout<<"sum of a & b & c is "<<a+b+C<<endl;
};
};
int main (){
student obj;
obj.add(10);
obj.add(10,20);
obj.add(10,20,30);
}