// #include<iostream>
// using namespace std;

//   signed main() {

//      int marks[5];
//        cout<<"\nInput a marks of Physics=";
//         cin>>marks[0];
//        cout<<"\nInput a marks of Chemistry=";
//         cin>>marks[1];
//        cout<<"\nInput a marks of Math=";
//         cin>>marks[2];
//        cout<<"\nInput a marks of Hindi=";
//         cin>>marks[3];
//        cout<<"\nInput a marks of English=";
//         cin>>marks[4];

//      float total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
//         cout<<"\nTotal: "<<total;

//      float average = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
//         cout<<"\nAverage: "<<average;

//     return 0;
//   }

// #include<iostream>
// #include<stdlib.h>

// using namespace std;

//   signed main() {

//      float *ptr;

//      float n;
//      cout<<"enter value";
//      cin >> n;
//       ptr = (float *) calloc( n, sizeof(float));

//     //   ptr[0] =1.4;
//     //   ptr[1] =2;
//     //   ptr[2] =5;
//     //   ptr[3] =8;

//        for (int i = 0; i < n; i++)
//        {
//           cout<<ptr[i]<<"\n";
//        }

//     return 0;
//   }

// #include<iostream>
// #include<stdlib.h>

// using namespace std;

//   signed main() {

//      int *ptr;

//      int n;
//      cout<<"enter value";
//      cin >> n;
//       ptr = (int *) malloc( n * sizeof(int));

//       ptr[0] =1;
//       ptr[1] =2;
//       ptr[2] =5;
//       ptr[3] =8;

//        for (int i = 0; i < n; i++)
//        {
//           cout<<ptr[i]<<"\n";
//        }

//     return 0;
//   }




// #include<bits\stdc++.h>
// using namespace std;

//   signed main() {
      
//       int num;
//         cout<<"\nInput number: ";
//          cin>>num;

//       int *ptr;
//         ptr = (int *) malloc (num * sizeof(int));

//          ptr[0] = 2;   
//          ptr[1] = 6;   
//          ptr[2] = 7;   
//          ptr[3] = 4;
//              for (int i = 0; i < num; i++)
//              {
//                 cout<<ptr[i]<<"\n";
//              }
                
//     return 0;
//   }




// #include<bits\stdc++.h>
// using namespace std;
  
//   signed main() {
      
//       int num;
//         cout<<"\nInput a number=";
//          cin>>num;   

//       float *ptr;
//          ptr = (float *) calloc (num, sizeof(float *));

//          ptr[0] = 5.0;    
//          ptr[1] = 9.5;    
//          ptr[2] = 4;    
//          ptr[3] = 7;
//              for (int i = 0; i < num; i++)
//              {
//                 cout<<ptr[i]<<"\n";
//              }
                 
//     return 0;
//   }




// #include<bits\stdc++.h>
// using namespace std;

//   signed main() {
     
//      int num;
//        cout<<"\nEnter a number=";
//         cin>>num;
       
//      int count = 0;  
//             for (int i = 1; i <= num; i++)
//             {
//                 if (num%i == 0) 
//                 {
//                     count++;
//                 }
//             }
            
//              if (count == 2)
//              {
//                 cout<<"\nPrime number";
//              }else
//              {
//                 cout<<"\nNon-Prime number";
//              }
             
//     return 0;
//   }




// #include<bits\stdc++.h>
// using namespace std;

// int area_Circle(float area, float radius){
//      area = 3.14 * radius * radius;
//       return area;     
// }

// int area_Rectangle(float num7)
//   signed main() {
    
//    cout<<"\nArea of Circle--------------------------------"; 
//     float area,radius;
//       cout<<"\nEnter radius of circle=";
//          cin>>radius;
//           cout<<"\nArea is:"<<area_Circle;


//    cout<<"\nArea of Rectangle--------------------------------";
//     float area,num_1,num_2; 
//       cout<<"\nEnter length of rectangle=";
//        cin>>num_1;
//       cout<<"\nEnter breadth of rectangle=";
//        cin>>num_2;

//    return 0;
//   }




// #include<bits\stdc++.h>
// using namespace std;

// int printResult(int num){
//     int sum , count  = 0;
//     for(int i = num; i > 0; i = i/10){
//       sum = i%10;
//       count = count*10+sum;
//     }
//     cout<<"Reverse:"<<count;
//     if (num == count)
//     {
//       cout<<"\nPalindrome";
//     }else
//     {
//       cout<<"\nNon-Palindrome";
//     }
//     return count;
// }

// signed main() {
//    int num;cout<<"enter  number=";cin>>num;

//    printResult(num);
//   return 0;
// }