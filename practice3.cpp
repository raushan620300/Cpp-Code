// #include<iostream>
// using namespace std;

//   int main(){
//     cout<<"\nFind size of fundamental data types:";
//     cout<<"\n--------------------";

//     cout<<"\nThe sizeof(char) is:"<<sizeof(char)<<"bytes";
//     cout<<"\nThe sizeof(short) is:"<<sizeof(short)<<"bytes";
//     cout<<"\nThe sizeof(int) is:"<<sizeof(int)<<"bytes";
//     cout<<"\nThe sizeof(long) is:"<<sizeof(long)<<"bytes";
//     cout<<"\nThe sizeof(float) is:"<<sizeof(float)<<"bytes";
//     cout<<"\nThe sizeof(double) is:"<<sizeof(double)<<"bytes";
//     cout<<"\nThe sizeof(bool) is:"<<sizeof(bool)<<"bytes";

//     return 0;
//   }




// #include<iostream>
// #include<climits>
// using namespace std;

//   int main(){
//     cout<<"\nCheck the upper and lower limits of integer :";
//     cout<<"\n------------------------------------------";

//     cout<<"\nThe maximum limit of int data type :"<<INT_MAX;
//     cout<<"\nThe minimum limit of int data type :"<<INT_MIN;
//     cout<<"\nThe maximum limit of  int data type :"<<UINT_MAX;
    
//     cout<<"\nThe maximum limit of long long  data type :"<<LLONG_MAX;
//     cout<<"\nThe minimum limit of long long data type : "<<LLONG_MIN;
//     cout<<"\nThe maximum limit of unsigned long long data :"<<ULLONG_MAX;
//     cout<<"\nThe Bits contain in char data type:"<<CHAR_BIT;
//     cout<<"\nThe maximum limit of char data type : "<<CHAR_MAX;
//     cout<<"\nThe minimum limit of char data type :"<<CHAR_MIN;
//     cout<<"\nThe maximum limit of signed char data type :"<<SCHAR_MAX;
//     cout<<"\nThe minimum limit of signed char data type : "<<SCHAR_MIN;
//     cout<<"\nThe maximum limit of unsigned char data type : "<<UCHAR_MAX;
//     cout<<"\nThe minimum limit of short data type :  "<<SHRT_MIN;
//     cout<<"\nThe maximum limit of short data type :  "<<SHRT_MAX;
//     cout<<"\nThe maximum limit of unsigned short data type :   "<<USHRT_MAX;
  
//      return 0; 
//   }



// #include<iostream>
// using namespace std;
  
//   int main(){
//     cout<<"\nCheck whether the primitive values crossing the limits or not :";
//     cout<<"\n-----------------------------------------------------------";

//     char gender='F'; 
//     bool married=1;
//     unsigned short sons=2;
//     short year=2023;
//     unsigned int salary=1500000;
//     double height=79.46;
//     float gpa=4.69;
//     long sal_drawn=12046758;
//     long long balance=9967848548;


//     cout<<"\nThe Gender is :"<<gender;
//     cout<<"\nIs she married :"<<married;
//     cout<<"\nNumbers of sons she has :"<<sons;
//     cout<<"\nYear of her apponitment :"<<year;
//     cout<<"\nSalary for a year :"<<salary;
//     cout<<"\nHeight is :"<<height;
//     cout<<"\nGPA :"<<gpa;
//     cout<<"\nWithdrawl :"<<sal_drawn;
//     cout<<"\nBalance is till :"<<balance;

//     return 0;
//   }




// #include<iostream>
// using namespace std;

// int32_t main()
// {
//   int num_1,num_2;
//       cout<<"\nEnter a first value=";
//       cin>>num_1;
//       cout<<"\nEnter a second value=";
//       cin>>num_2;

//          if (num_1>num_2)
//       {
//           cout<<"\nMaximum ="<<num_1;
//           cout<<"\nMinimum ="<<num_2;
//       }else
//       {
//         cout<<"\nMinimum ="<<num_1;
//         cout<<"\nMaximum ="<<num_2;
//       }
      
      
//  return 0;
// }




#include<iostream>
using namespace std;
int32_t main()
{
   int a,b;
     cout<<"\nEnter two values:";
     cin>>a>>b;

   char op;
     cout<<"\nInput an operator:";
     cin>>op;

         switch (op)
         {
         case '+':
            cout<<"Sum:"<<a+b;
            break;
         case '-':
            cout<<"Sub:"<<a-b;
            break;
         case '*':
            cout<<"Multiply:"<<a*b;
            break;
         case '/':
            cout<<"Divide:"<<a/b;
            break;
         
         default:
            cout<<"\nInvalid operator";
            break;
         }

   char ch;
     cout<<"\nEnter an alpha:";
     cin>>ch;

         switch (ch)
         {
         case 'm':
            cout<<"\nMonday";
            break;
         case 'w':
            cout<<"\nWednesdayṄV ";
            break;
         case 't':
            cout<<"\nTuesday";
            break;
         
         default:
             cout<<"\nInvalid";
            break;
         } 

 return 0;
}