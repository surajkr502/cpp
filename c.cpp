#include <iostream>
# include <limits>
# include <cmath>
using namespace std;
int main()
{

// areas
// circle,square,rectangle,triangle


// int radius;
// cout<<"enter the value of your radius";
// cin>>radius;
// cout<<radius*radius*22/7;


// int side;
// cout<<"enter the side of square";
// cin>>side;
// cout<<side*side;


// int breadth;
// int height;
// cout<<"enter the value of breadth and height";
// cin>>breadth;
// cin>>height;
// cout<<(breadth*height)/2;

// int hindi;
// int english;
// int math;

// cout<<"enter the marks of hindi subject";
// cin>>hindi;
// cout<<"enter the marks of english subject";
// cin>>english;
// cout<<"enter the marks of math subject";
// cin>>math;


// cout<<((hindi+english+math)*100)/300;



// datatypes

// int float double char void

// return type
// int= whole numbers(complete numbers)
// float=decimal numbers(1.2,3,9);7-8 digits after point
// double=decimal numbers()14-15 digits
// char=ul,lc,special symbols


// non return type
// void=no storage(redundancy reduce)


// 1.limit
// 2.adress
//3.size int =4byte  char=1byte


// char a='a';
// ascii charset /  unicode 

// int a;
// // cout<<sizeof(int);


// cout<<&a;
// // hexadecimal 


// cout<<numeric_limits<float>::max();






// int b;
// cout<<sizeof(int);
// float c;
// cout<<sizeof(float);


// cout<<&c;


// cout<<numeric_limits<int>::min();




// // operators

// unarry operator
// incremenrt=pre/post// decrement=pre/post

// // binary
// arithmetic(+,-,*,/,%)
// logical(and,or,not,exor)
// relational(>,<>=<= == !=)
// Assignment(+= -=*= /= %=)
// bitwise operator(and or not exor)


// ternary operator



// ++ --

// int a=10;
// cout<<--a;
// cout<<a;



// if we want to see the number we have to cast in integer data type
// cout<<(int)numeric_limits<char>::max(); 
 


// int a=10;
// int b=20;
// int c=1;
// int d=11;
// cout<<++d  - c++ + --b + a++ - --d - c--;
// 12-1+19+10-11-2


// arithmetic
// cout<<a+b;
// cout<<a-b;
// cout<<a*b;
// cout<<a/b;
// cout<<a%b;

// asignment
// a=+b;
// cout<<a;

// dry principle=do not repeat yourself

// a+=b;
// cout<<a;

// relational
// cout<<(a==b);

// // logical   exor
//  ip1   ip2   out
//  1      1     0
//  1      0      1
//  0      1      1
//  0      0      0

// int a=13;
// int b=3;

// cout << (a & b);

// (condition)?true:false

// int number =15;
// // (number%2==0)?cout<<"even":cout<<"odd";

// (number>10 && number<20)?cout<<number:cout<<"invalid";



// int pass;

// cout<<"Enter the passward: ";
// cin>>pass;
// (pass==1234)
// ?cout<<" cash withdrawl"
// :

// (
// cout<<" invalid passward try agin"
// ,cin>>pass,
// (pass==1234)?cout<<"cash withdrawl":
// (
//  cout<<"ipta",
//  cin>>pass,
//  (pass==1234)?cout<<"cash withdrawl":cout<<"card bloked"
//     )
// );




// int pass;

// cout<<"Enter the password";
// cin>>pass;
// (pass==0363)?cout<<"cash withdrawl":cout<<"invalit pin try "

//   ,cin>>pass,(pass==1963)?cout<<"cash withdrawl":cout<<"Invalid pin try again"
    
//       ,cin>>pass,(pass==1963)?cout<<"cash withdrawl":cout<<"Card Blocked";








// conditional statement

// int month;
// cout<<"enter the month between 1-12";
// cin>>month;
// if(month==1  month==3  month==5  month==7  month==8  month==10  month==12)
// {

//     cout<<"31  days";
// }
// else if(month==4  month==6  month==9 || month==11)
// {
//     cout<<"30  days";
// }
// else if(month==2)
// {
//     cout<<"28/29  days";
// }
// else
// {
//     cout<<"ii";
// }


// int day;

// cout<<"Enter the day number: ";
// cin>>day;
// if(day==1)
// {
//     cout<<"Sunday";
// }

// else if(day==2)
// {  
//         cout<<"Mon";  
// }

// else if(day==3)
// {  
//         cout<<"tue";  
// }
// else if(day==4)
// {  
//         cout<<"wed";  
// }
// else if(day==5)
// {  
//         cout<<"thu";  
// }
// else if(day==6)
// {  
//         cout<<"fri";  
// }
// else if(day==7)
// {  
//         cout<<"sat";  
// }
// else

// {
//     cout<<"Invalid input";
// }

// King, [5/17/2025 10:50 PM]
// char single;
// cout<<"Enter the character: ";
// cin>>single;
// if(single>='A' && single<='Z' || single>='a' && single<='z' )
// {

//         if(single>='A' && single<='Z' )
//         {
//                 cout<<"Its a uppercase";
//         }
//        else if(single>='a' && single<='z' )
//         {
//                 cout<<"Its a lowercase";
//         }
        
// }
// else{
//         cout<<"Its a special symbol";    
//      }


// string input;
// cout<<"enter the name of web";
// cin>>input;

// if(input=="www.tourism.com")
// {
//         cout<<"enter from tgh egiven options int=internationala dom=domestic";
//         cin>>input;
//         if(input=="int")
//         {
//                 cout<<"enter from tgh egiven options jspsn,korea, pakistan";
//                 cin>>input;
//                 if(input=="japan")
//                 {
//                         cout<<"1200rs";
//                 }
//                else if(input=="korea")
// {
//         cout<<"120rs";
// }
// else if(input=="pakistan")
// {
//         cout<<"0rs";
// }

// else
// {
//         cout<<"iadrss";
// }   

//         }
//         else if(input=="dom")
//         {
//                 cout<<"enter from tgh egiven options baang,mumbai,delhi";
//                 cin>>input;
//                 if(input=="banglore")
//                 {
//                         cout<<"1200rs";
//                 }
//                else if(input=="mumbai")
// {
//         cout<<"120rs";
// }
// else if(input=="delhi")
// {
//         cout<<"0rs";
// }

// else
// {
//         cout<<"iadrss";
// }
//         }
//         else
//         {
//                 cout<<"iadrss";
//         }
        
// }
// else{
//         cout<<"iadrss";
// }




// int a=10;
// int b=20;
// int temp;
// with two variables  with three variables







// int method;
// cout<<"Enter the method num: 2 or 3";
// cin>>method;
// if(method==2)
// {
// a=a+b;
// b=a-b;
// a=a-b;

// }
// else if(method==3)
// {
// temp=a;
// a=b;
// b=temp;

// }
// else
// {
//         cout<<"Wrong method number";
// }




// cout<<a<<b;




// meter reading

// 0-50  10rs/unit
// 50-100  20rs/unit
// 100-150  30rs/unit
// 150-200 40rs/unit
// above 200 50rs/unit


// int unit;
// cout<<"enter meater reading";
// cin>>unit;
// if(unit>0 && unit<=50)
// {
//         cout<<unit*10;
// }
// else if(unit>50 && unit<=100)
// {
//       cout<<50*10+(unit-50)*20;
// }
// else if(unit>100 && unit<=150)
// {
//       cout<<50*10+50*20+(unit-100)*30;
// }
// else if(unit>150 && unit<=200)
// {
//       cout<<50*10+50*20+50*30+(unit-150)*40;
// }
// else if(unit>200 )
// {
//       cout<<50*10+50*20+50*30+50*40+(unit-200)*50;
// }

// int a=10;

// int a;
// cout<<"choose your choice veg =1non veg=2";
// cin>>a;

// switch(a)
// {
      
//         case 1:cout<<"choose veg 1.noodles 2.aalu";
//         cin>>a;
//         switch(a)
//         {
//                case 1:cout<<"nnoodles khalo";
//                break;

//                case 2:cout<<"aalu khalo";
//                break;

//                default:cout<<"io";
               

//         }

//         break;
//         case 2:cout<<"choose from th given optio 1.chiken 2.biryani";
//         cin>>a;
//         switch(a)
//         {
//                case 1:cout<<"chiken khalo";
//                break;

//                case 2:cout<<"biryani khalo";
//                break;

//                default:cout<<"io";
               

//         }
//         break;
//         default:cout<<"ii";
//          break;
// }

// int,char
// logical expression
// fallthrough -break
// position of default is not fixed
// nesting is also problematic

// jumping statement

// int i=0;

// cout<<"abhishek";

// start:

// if(i<3)
// {
//         cout<<"anamika";
// i++;
//         goto start;
// }



// cout<<"akshay";







// int i=1;

// start:

// if(i<=10)

// {

//         cout<<2*i;
//         i++;
//  goto start;

// }

// loop
// =to perfrorm iterations

// do while
// while
// for



//


// do
// {
//         cout<<2*i;
//         ++i;

// }while(i<=10);


// while(i<=10)
// {
//         cout<<2*i;
//         ++i;

// }



// for(int i=1;i<=10;++i)
// {
//         cout<<2*i;
// }

// int i=1;
// do
// {
//         cout<<2*i;
//         ++i;
// }
// while(i<=10);



// int i=1;
// while(i<=10)
// {
//         cout<<2*i;
//         ++i; 
// }



// for(int i=1;i<=10;++i)
// {
//         cout<<2*i<<" "; 
// }




// sum of n natural numbers
// factorial
// factor
// hcf
// lcm




// int n1=6,n2=18;
// int sum=1,ans,lcm;
// for(int i=1;i<=n1;++i)
// {

// // sum=sum+i;
// // factorial=factorial*i;

// if(n1%i==0  && n2%i==0)
// {
//        ans=i;
// }


// }
// cout<<ans;

// lcm=n1*n2/ans;

// cout<<lcm;



//  int n1=10;  
//  int n2=9;
// int lcm;

// for( int i=n1; ;i=i+n1)
// {

// if(i%n1==0 && i%n2==0)
// {
//        lcm=i;
//        break;
// }

// }

// cout<<lcm;
// int i=n1;

// while(i=i+n1)
// {
//     if(i%n1==0 && i%n2==0)
//     {
//        cout<<i;
//        break;
//     }
       
// }

// int number=11;
// int count=0;
// for(int i=1;i<=number;++i)
// {
//        if(number%i==0 )
//        {
//               count++;

//        }
// }

// cout<<count;

// if(count==2)
// {
//        cout<<"prime number";
// }
// else{
//        cout<<"not";
// }


// int number=28;
// int fact=0;
// for(int i =1; i<number;++i)
// {
//        if(number%i==0)
//        {
// fact=fact+i;
//        }
// }

// if(fact==number)
// {
//        cout<<"perfect";
// }
// else{
//        cout<<"not";
// }


                            //   lcm
// int n1=10;
// int i=n1;
// int n2=9,lcm;


// while(i=n1+i)
// {
//        if(i%n1==0 && i%n2==0)
//        {
//         cout<<i;
//         break;
//        }
// }


                     //  factor

// int number=29;
// int fact=0;
// for(int i=1;i<number;++i)
// {
//        if(number%i==0)
//        {
//               fact=fact+i;
//        }
// }
// if(fact==number)
// {
//        cout<<"its perfect number";
// }
// else
// {
//        cout<<"not";
// }




// 2^3=8


// int number=3;
// int power=5;
// int ans=1;

// for(int i=1;i<=power;++i)
// {
//        ans=ans*number;
// }

// cout<<ans;



// ap series


// a+(n-1)*d

// 1+(4)*2;


// 5th term
//  1  3 5 7 9




// int ft;
// int n;
// int d;
// int ans;
// cout<<"enter ft n and d";
// cin>>ft>>n>>d;  
// for(int i=0;i<n;++i)
// {
//    ans =ft+i*d;
//    cout<<ans;
// }


// a*r^n-1


// 1
// 3
// 9
// 27
// 81
// 243


// int ft,n,r,ans;
// cout<<"enter ft n r";
// cin>>ft>>n>>r;
// for(int i=0; i<=n; ++i)
// {

//     ans=ft*pow(r,i);
//     cout<<ans;

// }

// fibonachi


// int ft=1;
// int st=2;
// int n=5;
// int next=ft+st;

// int i=1;

// while(i<=n)
// {

// if(i==1)
// {
//     cout<<ft<<endl;
//        i++;
//   continue;
 
// }
// if(i==2)
// {
//     cout<<st<<endl;
 
//     i++;
//     continue;
// }
// next=ft+st;
// cout<<next<<endl;
// ft=st;
// st=next;
// i++;

// }



// int number=12010; 
// int org=number;
// int digit=0,rev=0;
// while(number!=0)
// {
//    digit=number%10;
//         rev =rev*10+digit;
//         number=number/10;
//         if(digit<=0)
//         {
//             cout<<0;
//         }

// }
// cout<<rev;

// if(rev==org)
// {
//     cout<<"  pallindrome";
// }
// else
// {
//  cout<<"  not a pallindrome";
// }



// int number=123;
// int org=number;
// int sum=0,digit=0;
// while(number!=0)
// {
// digit=number%10;
//  sum=sum+digit*digit*digit;
//  number=number/10;
// }

// if(org==sum)
// {
//     cout<<"armstrong";
// }
// else
// {
//     cout<<"not an armstrong";
// }





// int number=153;
// int org=number;
// int sum;
// for(; number!=0 ; )
// {
//     int digit= number%10;
//    sum=sum+digit*digit*digit;
//    number=number/10;
// }

// if(org==sum)
// {
//     cout<<"armstrong";
// }
// else
// {
//     cout<<"not an armstrong";
// }


//  semi colon issue
// int i ;
//     for (i = 0; i < 10; i++);
//     {
//         cout << i;
//     }




// pattern



// row  colum
// square=5*5    
// half =  *     half = space

// for( int r=1;r<=5;++r)
// {


// for( int c=1;c<=5;++c)
// {

//    if(c>=r)
//    {
//     cout<<"*";
//    }
//     else
//     {
//         cout<<" ";
//     }

// }
// cout<<endl;
// }



// *
// **
// ***    r=c
// ****
// *


// for(int r=1;r<=5;++r)
// {

// for(int c=1;c<=9;++c)
// {

//     if(c>=r && c<=10-r)
//     {
//         cout<<"*";
//     }
//     else
//     {
//         cout<<" ";
//     }
// }
// cout<<endl;

// }






// for(int r=1;r<=5;++r)
// {
//     for(int c=1;c<=19;++c)
//     {
//         if(c>=6-r && c<=4+r)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<"-";
//         }

//         if(c>=10+r && c<=20-r)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<"-";
//         }

//     }
//     cout<<endl;

// }


// int a=0;
// for(int r=1;r<=9;++r)
// {
//     (r<=5?a++:a--);
// for(int c=1; c<=9; ++c)
// {

//     if(c>=6-a && c<=4+a)
//     {
//         cout<<"*";
//     }
// else{
//     cout<<" ";
// }

// }
// cout<<endl;

// }




// char a='a';
// for(int r=1;r<=5;++r)
// {
//     for(int c=1;c<=5;++c)
//     {
//         if(c<=r)
//         {
// cout<<a++;
//         }
//         else
//         {
// cout<<" ";
//         }
//     }
//     cout<<endl;
// }











}