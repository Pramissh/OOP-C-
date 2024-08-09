#include<iostream>
#include<conio.h>

class student 
{
    private:
            int rollno;
    public:
            void enter()
            {
                cout <<"enter roll no\n"
                cin>> rollno;
            }
}
    int main()
    {
        clrscr();
        student a;
        a.enter();
        a.display();
        getch();
    }