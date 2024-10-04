#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    float a, b;

public:
    SimpleCalculator()
    {
        cout << "Enter the value of first number \n";
        cin >> a;
        cout << "Enter the value of Second number \n";
        cin >> b;
    }
    float add()
    {
        return a + b;
    }
    float sub()
    {
        return a - b;
    }
    float mul()
    {
        return a * b;
    }
    float div12()
    {
        return a / b;
    }
    float div21()
    {
        return b / a;
    }
};
class ScientificCalculator
{
protected:
    float c, d;
    int f;

public:
    ScientificCalculator()
    {
        cout << "Welcome to the Scientific Calculator\n";
        cout<<"Enter the value of base \n";
        cin>>c;
        cout<<"Enter the value of constant \n";
        cin>>d;

    }
    float logarithmic(){
        return log(d)/log(c);
    }
    float power(){
        return pow(c,d);
    }
    float exponent(){
        return exp(c);
    }
    int factorial(){
            int c1=1;
        for(int i=1;i<=c;i++){
            c1=c1*i;
        }
        return c1;
    }
    
    
};
class calculator: public SimpleCalculator,public ScientificCalculator{

};

int main()
{
    calculator k;
    float Sum= k.add();
    float Diff= k.sub();
    float Mull=k.mul();
    float Div12=k.div12();
    float Div21=k.div21();
    float Log=k.logarithmic();
    float Power=k.power();
    float Exponent=k.exponent();
    int Factorial=k.factorial();
    cout<<"Sum= "<<Sum<<endl<<"Diff= "<<Diff<<endl<<"Mull= "<<Mull<<endl<<"DIv12= "<<Div12<<endl<<"Div21= "<<Div21<<endl;
    cout<<" log= "<<Log<<endl<<" Power- "<<Power<<endl<<" Exponent= "<<Exponent<<endl<<" Factorial= "<<Factorial;
    return 0;
}