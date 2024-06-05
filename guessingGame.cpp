#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{   
    srand((unsigned int) time(NULL));
    int guess=rand() % 100+1;
    int num=0;
    int a=1;
    int time=4 ;
    cout<<"Guess a number between 1 to 100 :"<<endl;
    do
    {
        cout<<"Remaining Turns "<<time+1<<endl;
        cin>>num;

    if(num==guess)
    {
        cout<<"You Won!!!"<<endl;
        a=0;
    }

    else if(num<guess)
    {
        cout<<"Enter a higher number!"<<endl;
    }

    else if(num>guess)
    {
        cout<<"Enter smaller number!"<<endl;
    }

    else 
    {
        cout<<"Turns Over!!"<<endl;
    }
    }
    while(a==1 && time--);

    return 0;
}
