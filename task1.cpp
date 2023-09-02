
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int tries;
    int user_choice;
    srand(time(0));
    int random_num= rand() %10 +1;
    cout<<"A random number between 1 and 10 has been chosen. What is the number? You have three tries."<<endl;
    for (tries=0; tries<3; tries++)
    {
        cin>>user_choice;
        if (user_choice>random_num)
        {
            cout<<"Too High!"<<endl;
        }
        else if (user_choice<random_num)
        {
            cout<<"Too low!"<<endl;
        }
        else
        {
            cout<<"Correct guess!";
            exit(0);
        }
    }
    cout<<"Correct number is: "<<random_num<<endl;

    return 0;
}

