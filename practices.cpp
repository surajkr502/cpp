#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  // # ASCII VALUE------------

  // char ch='c';
  // cout<<int(ch);
  // char ch=' ';
  // cout<<int(ch);
  // int n='a';
  // cout<<n;

  // # WAP to cal sum and average----------

  // int a,b,c;
  // float average,sum;
  // cout<<"Enter 3 Integers:";
  // cin>>a>>b>>c;
  // sum=a+b+c;
  // average=sum/3;
  // cout<<"The sum is:"<<sum<<endl;
  // cout<<"The average is:"<<average;

  // # Redusing variable in 3---------

  // int a,b,c;
  //  cout<<"Enter 3 Integers:";
  // cin>>a>>b>>c;
  // cout<<"The sum is:"<<a+b+c<<endl;
  // cout<<"The average is:"<<(a+b+c)/3.0;

  // # Area of circle and circumference---------

  // float r ,area,circ;
  // cout<<"Enter a radius of circle:";
  // cin>>r;
  // area=3.14*pow(r,2);
  // circ=2*3.14*r;
  // cout<<"Area of Circle is:"<<(int)area<<endl; //Type cating----------

  // cout<<"Circumference of Circle is:"<<circ;

  // # SWAPING THE NO.----------
  // Using 3 vareable------

  // int a,b,c;
  // cout<<"Enter 2 integers:";
  // cin>>a>>b;
  // cout<<"Before swapping 'a' is:"<<a<<endl<<"Before swapping 'b' is:"<<b<<endl;
  // c=a;
  // a=b;
  // b=c;
  // cout<<"After swapping 'a' is:"<<a<<endl<<"After swapping 'b' is:"<<b;

  // # WAP to convert the min into hrs and viseversa------------
  // int a,conv;
  // cout<<"Enter time in hrs:";
  // cin>>a;
  // conv=a*60;
  // cout<<"Time in mins:"<<conv;

  // int a,conv,conv1;
  // cout<<"Enter time in min:";
  // cin>>a;
  // conv=a/60;
  // conv1=a%60;
  // cout<<"Time is: "<<conv <<"hr" <<conv1 <<"min"<<endl;

  // # Decision control statement-----------------------

  // Odd and Even---

  // int a,b,c;
  // cout<<"Enter an Integers no.:";
  // cin>>a;
  // if(a%2==0)
  // {
  //     cout<<"Number is even";

  // }
  // else if(a==0)
  // {
  //      cout<<"Number is even";
  // }
  // else
  // {
  //   cout<<"Number is odd";
  // }

  // eligible for vote---

  // int a;
  // cout<<"Enter your age in year:";
  // cin>>a;
  // if(a>=18)
  // {
  //  cout<<"Your are eligible for vote";
  // }
  // else if(a<=0)
  // {
  //  cout<<"Wrong input";
  // }
  // else
  //    cout<<"Your are not eligible for vote";

  // int a;
  // cout<<"Enter a age:";
  // cin>>a;
  // if(a<3)
  // {
  //     cout<<"Baby";

  // }
  // else if(a<=13)
  // {
  //     cout<<"Child";
  // }
  // else if(a>=3 && a<=18)
  // {
  //     cout<<"Growing stage";
  // }
  // else
  // {
  //     cout<<"Adult";
  // }

  // # Find Greater No.-----------------

  // int a,b,c;
  // cout<<"Enter an three no.:";
  // cin>>a>>b>>c;
  // if(a<b && b<c)
  // {
  //     cout<<"Greater no. is :"<<c;

  // }
  // else if(a<b && c<b)
  // {
  //      cout<<"Greater no. is :"<<b;
  // }
  // else if(a>b && a>c)
  // {
  //     cout<<"Greater no. is :"<<a;

  // }
  // else
  // {
  //  cout<<"Given No. is Equal";
  // }
  // int a,b,c;
  // cout<<"Enter 3 Integers";
  // cin>>a>>b>>c;
  // if(a<b)
  // {
  //     if(b<c)
  //     {
  //         cout<<"Greater no. is :"<<c;
  //     }
  //     else
  //     cout<<"Greater no. is :"<<b;
  // }
  // else
  // {
  //     if(a>b)
  //     {
  //         if(a>c)
  //         {
  //             cout<<"Greater no. is :"<<a;
  //         }
  //         else
  //         cout<<"Greater no. is :"<<c;

  //     }
  // }

  // Check vowels----------------------

  // char ch;

  // cout<<"Enter a char:";
  // cin>>ch;
  // if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
  // {
  //     cout<<"char is Vowel.";
  // }
  // else
  // cout<<"You are enter another char.";

  // check alph and digits------------------------------

  // char ch;
  // cout<<"Enter any char:";
  // cin>>ch;
  // if(ch>=97 && ch<=122)
  // {
  //     cout<<"Char is Smaller letter alph.";
  // }
  // else if(ch>=65 && ch<=90)
  // {
  //     cout<<"Char is Capital letter alph.";

  // }
  //  else if(ch>=49 && ch<=57)
  //   {
  //     cout<<"Char is Digit.";
  //   }
  //   else
  //  {
  //     cout<<"Others Char.";
  //  }

  // # Ternary Operator-----------------------
  // int a,b;
  // cout<<"Enter 2 Integers:";
  // cin>>a>>b;
  // (a>b)?(cout<<"Greater no. is: a"):(cout<<"Greater no. is: b");

  //  # Loop--------------------
  // # do------------

  // int i=0;
  // while(i<=10)
  // {
  //   cout<<i<<endl;
  //   i=i+1;
  // }
  //    int i=0;
  //   while(i<=10)
  //    {
  //    cout<<i<<endl;
  //    i=i-1;
  //  }
  //  int i=10;
  //   while(i>=1)
  //   {
  //     cout<<i<<endl;
  //     i=i-1;
  //   }

  // int a,i=1;
  // cout<<"Enter a positive no.";
  // cin>>a;
  // while(i<=a)
  // {

  //   cout<<i<<endl;
  //   i++;
  // }
  // int a,sum=0;
  // cout<<"Enter an Integer:";
  // cin>>a;
  // int i=1;
  // while(i<=a)
  // {
  //   sum=sum+i;
  //   i++;
  // }
  // cout<<"Sum of no. is:"<<sum;

  // # do while-----------------------

  // int i=1;
  // do
  // {
  //   cout<<i<<endl;
  //   i++;

  // }
  // while(i<=10);
  // int i=1,sum=0,a;
  // cout<<"Enter a No.";
  // cin>>a;
  // do
  // {
  //   sum=sum+i,
  //   i++;
  // }
  // while(i<=a);
  // cout<<"Sum of No. is :"<<sum;

  // # for loop------------------------------

  // int a;
  // cout<<"Enter a No.";
  // cin>>a;
  // for(int i=0;i<=a;i++)
  // {

  //   cout<<i;
  // }

//   int a,sum=0;
//   cout<<"Enter an Integer:";
//   cin>>a;
//   for(int i=0;i<=a;i++)
//   {
//     sum=sum+i;

//   }
//   cout<<"Sum of Integers is:"<<sum;

//   return 0;
// }

// int a,fact=1;
// cout<<"Enter a Integer No.";
// cin>>a;
// for(int i=1;i<=a;i++)
// {
//   fact=fact*i;
// }
// cout<<"Factorial of given No. is :"<<fact;

// int a,rem,sum;
// cout<<"Enter 3 digit Integer:";
// cin>>a;
// for(sum=0;a>0;a=a/10)
// {
// rem=a%10;
// sum=sum+rem;
// }
// cout<<"Sum of this No. is :"<<sum;

// Armstronge Number-----------------------

// int a,rem=0,sum,n;
// cout<<"Enter Armstronge No.";
// cin>>a;
// n=a;
// for(sum=0;a>0;a=a/10)
// {
//   rem=a%10;
//   sum=sum+rem*rem*rem;
// }

// if(sum==n)

//   cout<<"This is Armstronge No.";

// else
// cout<<"This is Not an Armstronge No.";

// Nested loop-----------------------------------


// int a;
// for(int i=1;i<=4;i++)
// {
//   for(int j=1;j<=4;j++)
//   {
//     cout<<'*';
//   }
//    cout<<'\n';
// }

// Pattern Printing-------------

// for(int r=1;r<=5;r++)
// {
//   for(int c=1;c<=5;c++)
//   {
//     if(c<=r)
//     {
// cout<<"*";
//     }
//     else
// cout<<" ";
    
//   }
//   cout<<endl;
  
// }

for(int r=1;r<=5;r++)
{
  for(int c=1;c<=5;c++)
  {
    if(c>=r)
    {
cout<<"*";
    }
    else
cout<<" ";
    
  }
  cout<<endl;
  
}













  return 0;
}