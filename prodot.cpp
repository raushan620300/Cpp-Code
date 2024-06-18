// #include<iostream>           
// using namespace std;

//   int main(){
//       cout<<"\nHello World!";
//     return 0;
//   }




// #include<iostream>
// using namespace std;

//   int main(){
//     int num_1,num_2,num_3;
//       cout<<"\nEnter first number=";
//       cin>>num_1;
//       cout<<"\nEnter second number=";
//       cin>>num_2;
//       cout<<"\nEnter third number=";
//       cin>>num_3;

//     int sol_n;
//       sol_n=num_1+num_3*num_2-num_1;

//       cout<<"\nSolution is="<<sol_n;
      
//     return 0;
//   }




// #include<iostream>
// using namespace std;

//   int main(){
//     cout<<"\nFind size of fundamental data types :";

//     cout<<"\nThe size of (char) is="<<sizeof(char)<<"bytes";
//     cout<<"\nThe size of (short) is="<<sizeof(short)<<"bytes";
//     cout<<"\nThe size of (int) is="<<sizeof(int)<<"bytes";
//     cout<<"\nThe size of (long) is="<<sizeof(long)<<"bytes";
//     cout<<"\nThe size of (bool) is="<<sizeof(bool)<<"bytes";
//     cout<<"\nThe size of (float) is="<<sizeof(float)<<"bytes";
//     cout<<"\nThe size of (double) is="<<sizeof(double)<<"bytes";
//     cout<<"\nThe size of (long double) is="<<sizeof(long double)<<"bytes";
    
//     return 0;
//   }




// #include<iostream>
// #include<climits>
// using namespace std;

//   int main(){
//     cout<<"\nCheck the upper and lower limits of integer:";
//     cout<<"\n----------------------";
//     cout<<"\nThe maximum limit of int data type:"<< INT_MAX;
//     cout<<"\nThe minimum limit of int data type:"<< INT_MIN;
//     cout<<"\nThe maximum limit of unsigned int data type:"<< UINT_MAX;
//     cout<<"\nThe maximmum limit of long data type:"<< LLONG_MIN;
//     cout<<"\nThe minimum limit of long long data type:"<< LLONG_MIN;
   
//     cout<<"\nThe Bits containin char data type:"<< CHAR_BIT;
//     cout<<"\nThe maximum limit of char data type:"<< CHAR_MAX;
   
//     return 0;
//   }




// #include<iostream>
// #include<iomanip>
// using namespace std;

//   int main(){
//     int n1=5, n2=7;
//     double d1=3.7, d2=8.0;

//       cout<<"\nDisplay arithmetic operations with mixed data type:";
//       cout<<"\n-------------------------------------------------";

//       cout<<""<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
//       cout<<""<<d1<<"+"<<d2<<"="<<d1+d2<<endl;
//       cout<<""<<n1<<"+"<<d2<<"="<<n1+d2<<endl;

//       cout<<""<<n1<<"-"<<"="<<n2<<n1-n2<<endl;
//       cout<<""<<d1<<"-"<<"="<<d2<<d1-d2<<endl;
//       cout<<""<<n1<<"-"<<"="<<n2<<n1-d2<<endl;
      
//     return 0;
//   }




// #include<iostream>
// #include<cmath>
// #include<ctime>

// using namespace std;

//   int main(){
//       time_t x = time(NULL);
//       tm* xPtr = localtime(&x);

//         cout<<"Hours="<<(xPtr->tm_hour)<<endl;
//         cout<<"Minutes="<<(xPtr->tm_min)<<endl;
//         cout<<"Seconds="<<(xPtr->tm_sec)<<endl;

//         cout<<"Month of the year="<<(xPtr->tm_mon)+1<<endl;
//         cout<<"Day ot the month="<<(xPtr->tm_mday)<<endl;
//         cout<<"Year="<<(xPtr->tm_year)+1900<<endl;

//         cout<<"Day of the year="<<(xPtr->tm_yday)<<endl;
//         cout<<"Weekday="<<(xPtr->tm_wday)<<endl;
//         cout<<"Daylight savings="<<(xPtr->tm_isdst)<<endl;

//         cout<<endl;
//         cout<<endl;
        
//         cout<<"Current Time="<<(xPtr->tm_hour)<<"/"<<(xPtr->tm_min)<<"/"<<(xPtr->tm_sec)<<endl;
//         cout<<endl;
//         cout<<"Current Date="<<(xPtr->tm_mon)+1<<"/"<<(xPtr->tm_mday)<<"/"<<(xPtr->tm_year)+1900<<endl;

//     return 0;
//   }