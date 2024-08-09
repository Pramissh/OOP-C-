// Student Record Entry and Display System 

#include <iostream>
#include <conio.h>

class student 
{
    private:
        char name[20];
        int roll;
        float marks;
        
    public:
        int age;

        void enter() // Moved to public
        {
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter roll:";
            std::cin >> roll;
            std::cout << "Enter marks: ";
            std::cin >> marks;
        }

        void input() // Removed extra semicolon and fixed the method body
        {
            std::cout << "Enter  name, roll, marks, age\n"<< std::endl;
            std::cin >> name >> roll >> marks >> age;
        }
        
        void display() // Added std:: to cout
        {
            std::cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << "\nAge: " << age << std::endl;
        }
}; // Added semicolon after the class definition

int main()
{
    student ram, st, p; // Fixed object names
    ram.input();
    ram.display();
    ram.enter();
    
    st.input();
    st.display();
    
    return 0;
}
