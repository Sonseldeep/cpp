#include<iostream>
using namespace std;

class A {
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+ (A &obj){
        int valu1 = this ->a;
        int valu2 = obj.a;
        cout<<valu2-valu1<<endl;

    }
};
int main(){
    A obj1, obj2;
    obj1.a = 4;
    obj2.a =7;
    obj1 + obj2;
    return 0;
}