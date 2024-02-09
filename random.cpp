/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 1000);
    int randomNumber = distribution(gen);
    bool flag=true;
    int n=4;
    int n1;
    cout<<"Choose a number between 1 and 1000"<<endl;
    cout<<"Enter Number: ";
    cin>>n1;
    while(flag)
    {
        if(n==0)
        {
            flag=false;
            break;
        }
        if(n1==randomNumber)
        {
            cout<<"Congratulations!!! you guessed the correct number"<<endl;
            break;
            flag=false;
        }
        if(n1>randomNumber)
        {
            cout<<"Your number is too large"<<endl;
            cout<<n<<" chances remaining"<<endl;
            cout<<"Enter number: ";
            cin>>n1;
            n--;
        }
        if(n1<randomNumber)
        {
            cout<<"Your number is too small"<<endl;
            cout<<n<<" chances remaining"<<endl;
            cout<<"Enter number: ";
            cin>>n1;
            n--;
        }
    }
    if(n1==randomNumber && n==0)
    {
        cout<<"Congratulations!!! you guessed the correct number"<<endl;
    }
    if(n==0)
    {
        cout<<"The number is "<<randomNumber;
        cout<<" Better luck next time";
    }
}
