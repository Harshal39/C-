#include<iostream>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
using namespace std;

int main()
{
    char input[128];
    cout<<"******************Welcome*******************\n";
    
    while(1)
    {
        gets(input);

        if(strcmp(input, "Hi")==0)
        {
            cout<<"Hello\n";
        }
        else if(strcmp(input, "How are you")==0)
        {
            cout<<"I am fine\n";
        }
        else if(strcmp(input,"What are you doing")==0)
        {
            cout<<"I am learning something new\n";
        }
        else if(strcmp(input,"Sum")==0)
        {
            int num1,num2;
            cout<<"Give first number\n";
            cin>>num1;
            cout<<"Give second number\n";
            cin>>num2;
            cout<<"Sum of num1 and num2 is "<<num1+num2<<"\n";
        }
        else if(strcmp(input,"Multiply")==0)
        {
            int num1,num2;
            cout<<"Give first number\n";
            cin>>num1;
            cout<<"Give second number\n";
            cin>>num2;
            cout<<"Product of num1 and num2 is "<<num1*num2<<"\n";
        }
        else if(strcmp(input,"Subtraction")==0)
        {
            int num1,num2;
            cout<<"Give first number\n";
            cin>>num1;
            cout<<"Give second number\n";
            cin>>num2;
            cout<<"Subtraction of num1 and num2 is "<<num1-num2<<"\n";
        }
        else if(strcmp(input,"Division")==0)
        {
            int num1,num2;
            cout<<"Give first number\n";
            cin>>num1;
            cout<<"Give second number\n";
            cin>>num2;
            cout<<"Division of num1 and num2 is "<<num1/num2<<"\n";
        }
        else if(strcmp(input, "Bye")==0)
        {
            exit(0);
        }
        else if(strcmp(input,"Can you feel")==0)
        {
            cout<<"I am a machine and I have no feelings\n";
        }
        else{
            cout<<"Sorry I can't understand you\n";
        }
         
    }
}