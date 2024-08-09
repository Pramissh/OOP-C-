#include <iostream>
#include <conio.h>
class student 
{
    private:
        int rollno;
    public:
        void enter()
        {
            std::cout << "Enter roll no\n"; // Added semicolon and std::
            std::cin >> rollno;             // Added std::
        }
        
        void display() // Added display method
        {
            std::cout << "Roll no: " << rollno << std::endl; // Added std:: and std::endl
        }
};

int main()
{
    student a;
    a.enter();
    a.display();
    return 0; // Return 0 to indicate successful execution
}
