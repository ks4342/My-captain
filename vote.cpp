#include <iostream>
using namespace std;

int main()
{
    int age ;
    cout<<"Please enter your age : ";
    cin >>age;
    if(age>=18 && age<=100 )
    {
        cout<<"You are Eligible to vote ";
    }

    else
        {
        cout<<"You are not eligible to vote";
    }

return 0;
}

