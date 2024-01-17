// example of multiple inheritance
#include <iostream>

using namespace std;

class parent{
    public:
    parent(){
        cout<<"Constructor of parent class is called"<<endl;
    }
};

class parent2{
    public:
    parent2(){
        cout<<"Constructor of child class is called"<<endl;
    }
};

class grandchild: public parent, public parent2{
    public:
    grandchild(){
        cout<<"const. of grandchild class"<<endl;
    }
};

int main()
{
    grandchild c;

    return 0;
}