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

    void print_id(void)
    {
        cout << "Id: " << this->id << "\t";
    }

    void print_name(void)
    {
        cout << "Name: " << this->name << "\n";
    }

    void print_data(void)
    {
        this->print_id();
        this->print_name();
    }
};


int main (void)
{
    ball * myball[10];
    for (int i = 0; i < 10; i++)
    {
        myball[i] = new ball(i, "Blue");
        myball[i]->print_data();
    }
    for (int k = 0; k < 10; k++)
    {
        delete myball[k];
    }

    return 0;
}

