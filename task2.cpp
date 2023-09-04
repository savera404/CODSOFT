#include <iostream>

using namespace std;
template <typename t>
t ArthOperation(t n1, t n2, char op){
    switch(op)
    {
    case '+':
        return n1+n2;
    case '-':
        return n2-n1;
    case 'x':
        return n1*n2;
    case '/':
        if (n2!=0)
        {
            return n1/n2;
        }
        else
        {
            cout<<"Denominator cannot be 0"<<endl;
            exit(0);
        }
    default:
        cout<<"Invalid operator"<<endl;
        exit(0);
    }

}
int main()
{
   double num1, num2;
    char arth_operator;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"Enter operation to be performed: "<<endl;
    cin>>arth_operator;
    cout<<"Result: "<< ArthOperation(num1, num2,arth_operator)<<endl;
    return 0;
}

