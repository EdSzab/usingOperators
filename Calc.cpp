#include <iostream>
using namespace std;

void sum();
void dif();
void pro();
void quo();
void all();

int a, b, c;
string op;
string op1;

int main()
{
    cout << "chose an operator please." << endl
         << "(1) Addition\n (2) Subtraction\n (3) Multiplication\n (4) Division" << endl;

    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        op1 = "add";
        all();
        sum();
        break;

    case 2:
        op1 = "subtract";
        all();
        dif();
        break;

    case 3:
        op1 = "multiply";
        all();
        pro();
        break;

    case 4:
        op1 = "divide";
        all();
        quo();
        break;
    
    case 69:
        cout << "nice";
        break;    
}

    return 0;
}

void all()
{
    cout << "type the first number you would like to " << op1 << endl;
    cin >> a;
    cout << "type the second number you would like " << op1 << endl;
    cin >> b;
}

void sum()
{
    c = a + b;
    op = " Plus ";
    cout << a << op << b << " Equals " << c;
}

void dif()
{
    c = a - b;
    op = " Minus ";
    cout << a << op << b << " Equals " << c;
}

void pro()
{
    c = a * b;
    op = " Multiplied by ";
    cout << a << op << b << " Equals " << c;
}

void quo()
{
    c = a / b;
    op = " Divided by ";
    cout << a << op << b << " Equals " << c;
}