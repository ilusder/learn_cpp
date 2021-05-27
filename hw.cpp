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
    cout << "Hello World on C++\n";
    ball myball(1, "Red");
    myball.print_name();
    return 0;
}

