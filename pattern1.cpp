//  #include<iostream>      //Draw a rectangle
// using namespace std;

// int main(){
//     int row,col;
//     cout<<"\nInput rows=";
//     cin>>row;
//     cout<<"\nInput columns=";
//     cin>>col;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
    
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int row,col;
//     cout<<"\nEnter rows=";
//     cin>>row;
//     cout<<"\nEnter columns=";
//     cin>>col;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <=col; j++)
//         {
//             if (i==1 || i==row )
//             {
//                 cout<<"*";
//             }
//             else if ( j==1 || j==col)
//             {
//                cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }




// #include<iostream>              //Inverted half pyramid
// using namespace std;

//   int main(){
//     int num;
//     cout<<"\nEnter a number=";
//     cin>>num;

//         for (int i = num; i >= 1; i--)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout<<"*";
//             }
//             cout<<"\n";
//         }
        
//     return 0;
//   }




// #include<iostream>                       //Half Pyramid using after 180
// using namespace std;

//   int main(){
//     int n;
//     cout<<"\nEnter a number=";
//     cin>>n;

//         for (int i = 1; i <= n; i++)
//         {
//              for (int j = 1; j <= n; j++)
//              {
//                 if (j<=n-i)
//                 {
//                     cout<<" ";
//                 }else
//                 {
//                     cout<<"*";
//                 }
//             }
//              cout<<"\n";
//         }
        
//     return 0;
//   }




// #include<iostream>               //Half Pyramid using numbers
// using namespace std;

//   int main(){
//     int num;
//     cout<<"\nEnter a number=";
//     cin>>num;

//         for (int i = 1; i <= num; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout<<i<<" ";
//             }
//             cout<<"\n";
//         }
        
//     return 0;
//   }




// #include<iostream>                //Floyd`s triangle
// using namespace std;

//   int main(){
//     int n;
//     cout<<"\nEnter a number=";
//     cin>>n;

//         int count=1;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                  cout<<count<<" ";
//                  count++;
//             }
//             cout<<"\n";
//         }
        
//     return 0;
//   }




