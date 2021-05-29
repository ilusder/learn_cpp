#include <iostream>
#include <string>
using namespace std;

class ball
{
    int id;
    string name;
    public:
    ball(int id, string name)
    {
        this->id = id;
        this->name = name;
    }


    void print_name(void)
    {
        cout << this->name << "\n";
    }
};

int main (void)
{
    ball * myball = new ball(2, "Blue");
    myball->print_name();
    delete myball;
    return 0;

}

