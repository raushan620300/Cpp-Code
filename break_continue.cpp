// #include<iostream>       //Write a program to find which is prime or not
// using namespace std;

// int main(){
//     int n;
//     cout<<"\nEnter a number=";
//     cin>>n;
//     int i;
//     for ( i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<"\n Non Prime";
//             break;
//         }
//     }
//     if (i==n)
//         {
//             cout<<"\n  Prime";
//         }
    
//     return 0;
// }




// #include<iostream>   //continue statement
// using namespace std;

// int main(){
//     for (int i = 1; i <= 100; i++)
//     {  
//         if (i%3==0)
//         {
//             continue;
//         }
        
//         cout<<"\n"<<i;
//     }
    
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"\nEnter two numbers=";
//     cin>>a>>b;
//     for (int n = a; n <= b; n++)
//     {
//         int i;
//         for ( i = 2; i < n; i++)
//         {
//             if (n%i==0)
//             {
//                 break;
//             }
//         }
//         if (i==n)
//         {
//             cout<<"\n"<<n;
//         }
//     }
    
//     return 0;
// }




#include<iostream>      
using namespace std;

int main(){
    int n;
    cout<<"\nEnter a number=";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            continue;
        }
        cout<<"\n"<<i;
    }
    
    return 0;
}




