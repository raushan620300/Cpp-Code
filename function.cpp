// #include<iostream>                           //Add two numbers
// using namespace std;

//   int add(int num_1,int num_2){
//     int sum;
//     sum=num_1+num_2;
//     return sum;
//   }

//   int main(){
//     int a,b;
//     cout<<"\nEnter a first number=";
//     cin>>a;
//     cout<<"\nEnter a second number=";
//     cin>>b;

//     cout<<"\nSum is :"<<add(a,b);
    
//     return 0;
//   }




// #include<iostream>                      //Solution by rule of BODMAS
// using namespace std;
  
//   int rule(int num1,int num2,int num3){
//       int solve;
//       solve=num1+num3-num2*num1;
//       return solve;
//   }
  
//   int main(){
//     int a,b,c;
//       cout<<"\nEnter a first number=";
//       cin>>a;
//       cout<<"\nEnter a second number=";
//       cin>>b;
//       cout<<"\nEnter a third number=";
//       cin>>c;

//       cout<<"\nSolution is :"<<rule(a,b,c);

//     return 0;
//   }




// #include<iostream>                   //Find Even or Odd
// using namespace std;

//   int check(int n){
//     if (n%2==0)
//     {
//        cout<<"\nEven";
//     }else
//     {
//        cout<<"\nOdd";
//     }
//     return 0;
//   }

//   int main(){
//     int num;
//       cout<<"\nEnter a number=";
//       cin>>num;
       
//       cout<<check(num);

//     return 0;
//   }




// #include<iostream>                  //Find Prime or Non-prime
// using namespace std;
 
//   int find(int num){
//     int count=0;
//         for (int i = 1; i <= num; i++)
//         {
//             if (num%i==0)
//             {
//                 count++;
//             }
//         }
//         if (count==2)
//         {
//             cout<<"\nPrime";
//         }else
//         {
//             cout<<"\nNon-Prime";
//         }

//         return num;
//     }

//   int main(){
//     int a;
//       cout<<"\nEnter a number=";
//       cin>>a;

//       cout<<find(a);

    
//   }




// #include<bits/stdc++.h>                 // Find sum of given number
// using namespace std;

//   int sum(int num){
//     int add=0;
//         for (int i = 1; i <= num; i++)
//         {
//            add += i;
//         }
//         return add;
//   }

//   int32_t main(){
//     int x;
//       cout<<"\nEnter a number=";
//       cin>>x;

//       cout<<sum(x)<<endl;

//     return 0;
//   }




// #include<bits/stdc++.h>                    //Find Pythoagorean triplet or not
// using namespace std;

//   bool check(int x, int y,int z){
//      int a=max(x,max(y,z));
//      int b,c;

//          if (a == x)
//          {
//             b=y;
//             c=z;
//          }else if (a == y)
//          {
//             b=x;
//             c=z;
//          }else
//          {
//             b=x;
//             c=y;
//          }
//          if (a*a==b*b+c*c)
//          {
//             return true;
//          }else
//          {
//             return false;
//          }
//    }
//   int32_t main(){
//     int x,y,z;
//       cin>>x>>y>>z;
    
//       if (check(x,y,z)){
//         cout<<"\nPythagorean triplet";
//       }else
//       {
//         cout<<"\nNot Pythagorean triplet";
//       }
      
//        return 0;
//   }




// #include<bits/stdc++.h>                    //Binary to Decimal
// using namespace std;

//   int check(int n){
//      int ans=0;
//      int x=1;
//      int y;
//          while (n>0)
//          {
//             y=n%10;
//             ans += x*y;
//             x *= 2;
//             n /= 10;
//          }
//           return ans;
//   }

//   int32_t main(){
//     int n;
//       cin>>n;

//       cout<<check(n);
//     return 0;
//   }




// #include<bits/stdc++.h>               //Octal to Decimal
// using namespace std;
//   int check(int num){
//     int ans=0;
//     int x=1;
//     int y;
//         while (num>0)
//         {
//             y=num%10;
//             ans += x*y;
//             x *= 8;
//             num /= 10;
//         }
//         return ans;
//   }

//   int32_t main(){
//     int num;
//       cin>>num;

//       cout<<check(num);

//     return 0;
//   }




// #include<bits/stdc++.h>               //Find a Natural number or not
// using namespace std;

// bool find(int num){
//     if (num>0)
//     {
//         return true;
//     }else
//     {
//         return false;
//     }
// }

// int32_t main(){
//     int num;
//       cout<<"\nEnter a number=";
//       cin>>num;

//       if (find(num))
//       {
//          cout<<"\nNatural number";
//       }else
//       {
//          cout<<"\nNot Natural number";
//       }
      
//       return 0;




// #include<bits/stdc++.h>                        //Find Prime or not
// using namespace std;

//   bool check(int num){
//        int count=0;
//            for (int i = 1; i <= num; i++)
//            {
//               if (num%i==0)
//               {
//                  count++;
//               }
//            }  if (count==2)
//               {
//                  return true;
//               }else
//               {
//                 return false;
//               }
//   }

//   int32_t main(){
//      int num;
//        cout<<"\nEnter a number=";
//        cin>>num;

//            if (check(num)){
//             cout<<"\nPrime";
//            }else
//            {
//             cout<<"\nNon-Prime";
//            }
//    }




// #include<bits/stdc++.h>                //Convert into Celsius to Fahrenheit
// using namespace std;

//   int find(float cel){
//     float frh;
//       frh = (cel * 9.0) / 5.0 + 32;
//       return frh;
//   }
   
//   int32_t main(){
//     float cel;
//       cout<<"\nConvert temperature in Celsius to Fahrenheit";
//       cout<<"\n----------------------------------------------";

//       cout<<"\nInput the temperature in Celsius :";
//       cin>>cel;
      
//       cout<<"\nThe temperature in Fahrenheit :"<<find(cel)<<endl;

//     return 0;
//   }




// #include<bits/stdc++.h>                         //Find Simple interest
// using namespace std;
//   int find(float p, float t, float r){
//        float si;
//          si=(p*r*t)/100;
//          return si;
//   }

//   int32_t main(){
//     float p , t , r;
//       cout<<"\nEnter Principal=";
//       cin>>p;
//       cout<<"\nEnter Rate of Interest=";
//       cin>>r;
//       cout<<"\nEnter Time=";
//       cin>>t;

//       cout<<endl;
//       cout<<endl;

//       cout<<"\nThe Simple interest for the amount "<<p<<" for "<< t <<" @  "<<r<<" i "<<find(p,t,r);
      
//     return 0;
//   }




// #include<bits/stdc++.h>                             //Find Natural number
// using namespace std;
  
//   int natural(int num){
        
//         for(int i=1; i<=10; i++){
//             cout<<"\n"<<i;
//         }
//         return 0;
//   }

//   int32_t main(){
//     int num;
//       cout<<"\n"<<natural(num);
      
//     return 0;
//   }




// #include<bits\stdc++.h>                       //Find factorial of a number

// using namespace std;
  
//     int factorial(int);

//   int main(){
//       int num;
//         cout<<"\nEnter a value:";
//         cin>>num;

//         cout<<"Factorial is :"<<factorial(num);

//     return 0;
//   }

//     int factorial(int num){
//         int fact=1;
            
//             for (int i = 1; i <= num; i++)
//             {
//                 fact *= i;
//             }
//             return fact;
//     }




// #include<iostream>                      //Find Maximum or Minimum

// using namespace std;

// int find(int num_1,int num_2);

// int32_t main()
// {
//     int num_1,num_2;
//       cout<<"\nEnter a first value=";
//       cin>>num_1;
//       cout<<"\nEnter a second value=";
//       cin>>num_2;

//       cout<<find(num_1,num_2);

//  return 0;
// }

//   int find(int num_1, int num_2){
//       if (num_1>num_2)
//       {
//           cout<<"\nMaximum ="<<num_1;
//           cout<<"\nMinimum ="<<num_2;
//       }else
//       {
//         cout<<"\nMinimum ="<<num_1;
//         cout<<"\nMaximum ="<<num_2;
//       }
      
//       return num_1,num_2;
//   }




// #include<bits\stdc++.h>                  //Print Hello World using Recursion

// using namespace std;

//   void printHello(int count);

//   int main(){
//       printHello(5);

//     return 0;
//   }

//   void printHello(int count){
//            if (count == 1)
//            {
//               return;
//            }
//          cout<<"\nHello World!"<<endl;
//       printHello(count-1);

//   }




// #include<iostream>                 //Input marks of subjects and find them percentage
// using namespace std;

// int calPercentage(int math, int english, int hindi);

// int32_t main()
// {
//     int math;
//     int english;
//     int hindi;
//       cout<<"\nEnter a marks of Math=";
//       cin>>math;
//       cout<<"\nEnter a marks of English=";
//       cin>>english;
//       cout<<"\nEnter a marks of Hindi=";
//       cin>>hindi;

//       cout<<"\nPrecentage of all subject :"<<calPercentage(math,english,hindi)<<"%"<<endl;

//  return 0;
// }

// int calPercentage(int math, int english, int hindi){
//     return ((math + english + hindi) / 3);
// }




// #include<iostream>                       //Find Area and Perimeter of Rectangle
// using namespace std;

//   float printArea(float l, float b);
//   float printPerimeter(float l, float b);

// int32_t main()
// {
//    float l,b;
//      cout<<"\nEnter length of Rectangle=";
//      cin>>l;
//      cout<<"\nEnter breadth of Rectangle=";
//      cin>>b;

//        cout<<"\nArea of Rectangle="<<printArea(l,b);
//        cout<<"\nPerimeter of Rectangle="<<printPerimeter(l,b);
//  return 0;
// }

//      float printArea(float l, float b){
//        return l * b;
//     }

//      float printPerimeter(float l, float b){
//        return   2 * (l + b);
//     }




// #include<iostream>                                  //Find Simple Interest
// using namespace std;

//   int findSI(float p, float r, float t);          //Here,p is 'Principal' ,r is 'Rate' , t is 'Time'

//    int32_t main()
//   {
//      float p;
//        cout<<"\nEnter Principal=";
//        cin>>p;
//      float r;
//        cout<<"\nEnter Rate=";
//        cin>>r;
//      float t;
//        cout<<"\nEnter Time=";
//        cin>>t;

//          cout<<"\nSimple interest:"<<findSI(p,r,t);

//        return 0;
//   }

//   int findSI(float p, float r, float t){
//       int si;
//          si=p*r*t/100;

//          return si;
//   }




//  #include<iostream>                           //Print Something using function
//  using namespace std;

//  void printName(int count);

//  int32_t main()
//  {
//     printName(5);

//   return 0;
//  }

//  void printName(int count){
//     for (int i = 1; i <= count; i++)
//     {
//         cout<<"\nHello! Guys,I`m Raushan Sinha.";
//     }
    
//  }




 