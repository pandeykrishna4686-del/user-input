#include<iostream>
using namespace std;
{
public:
    virtual void sound()
    {
        cout << "Animal make a sound " << endl;
    }
};
class dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog Barks" << endl;
    }
};
class cat : public dog{
    public:
    void sound() overrideP{
        cout<< "cat meows"<<endl;
    }
};
int main(){
    Animal *ace; // *ace is a pointer here
    Animal a;
    Animal d;
    dog d;
    cat c;
    ace= &d;
    ace -> sound();
    ace= &c;
    ace -> sound()
}