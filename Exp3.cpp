/*
PRN-22070123092
Exp-3 = Part A*/
#include<iostream>
using namespace std;

int main()
{
    int prn;
    int digit;
    cout<<"Enter your prn:"<<endl;
    cin>>prn;
    while(prn>0)
    {
        digit=prn%10;
        cout<<digit<<endl;
        prn=prn/10;
    }

/*
OUTPUT
Enter your prn:
123094
4
9
0
3
2
1
*/

/*
Exp-3 = Part B*/

    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int sum;
    int average;
    cout<<"Enter your marks for each subjects;"<<endl;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    sum=(sub1+sub2+sub3+sub4+sub5);
    average=(sum)/5;
    if(average>=90)
    {
    cout<<"Grade is O";
    }
    else if(average>=85)
    {
    cout<<"Grade is A+";
    }
    else if(average>=75)
    {
    cout<<"Grade is A";
    }
    else if(average>=65)
    {
    cout<<"Grade is B+";
    }
    else if(average>=55)
    {
    cout<<"Grade is B";
    }
    else if(average>=40)
    {
    cout<<"Grade is C";
    }
    else
    {
    cout<<"Student has failed";
    } 
    
} 

/*OUTPUT
Enter your marks for each subjects;
99
100
98
97
97
Grade is O
*/
