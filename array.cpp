// #include<bits\stdc++.h>                  //Simple examle of an Array

//  using namespace std;

//    int32_t main(){
//       int arr[5] = {10,20,30,40,50};

//         cout<<arr[3]<<endl;

//     return 0;
//    }




// #include<iostream>

// using namespace std;

//   int32_t main(){
      
//       int num;
//         cout<<"\nPick a size of an Array by a user=";
//           cin>>num;

//       int arr[num];
//           for (int i = 0; i < num; i++)
//           {
//              cin>>arr[i];
//           }

//             for (int i = 0; i < num; i++)
//           {
//              cout<<arr[i]<<" ";
//           }   

//     return 0;
//   }




// #include<iostream>                //Find Maximum or Minimum
// #include<climits>

// using namespace std;

//   int32_t main(){
//        int num;
//          cout<<"Enter a number="<<endl;
//            cin>>num;

//            int arr[num];

//                  for (int i = 0; i < num; i++)
//                  {
//                     cin>>arr[i];
//                  }
                 
//              int maxNo = INT_MIN;
//              int minNo = INT_MAX;

//                  for (int i = 0; i < num; i++)
//                  {
//                     maxNo = max(maxNo, arr[i]);
//                     minNo = min(minNo, arr[i]);
//                  }
                 
//                cout<<"\nMaximu number:"<<maxNo<<"\nMinimum number:"<<minNo<<endl;

//     return 0;
//   }




// #include<iostream>                  Marks of Subjects inputted by user
// using namespace std; 

//   int main(){
     
//       int marks[3];
        
//         cout<<"\nEnter a marks of Phy=";
//           cin>>marks[0];
//         cout<<"\nEnter a marks of Che=";
//           cin>>marks[1];
//         cout<<"\nEnter a marks of Math=";
//           cin>>marks[2];
           
//            cout<<"\nPhy="<<marks[0]<<"\nChe="<<marks[1]<<"\nMath="<<marks[2];

//     return 0;
//   }




// #include<iostream>              //Marks are inputted by user and find total & average of the marks
// using namespace std;

//   int main(){
     
//       int marks[3];
        
//         cout<<"\nEnter a marks of Phy=";
//           cin>>marks[0];
//         cout<<"\nEnter a marks of Che=";
//           cin>>marks[1];
//         cout<<"\nEnter a marks of Math=";
//           cin>>marks[2];
           
//            int total = marks[0] + marks[1] + marks[2];
//              cout<<"\nTotal is:"<<total;

//            float avg = total / 3;  
//             cout<<"\nAverage is:"<<avg;

//     return 0;
//   }




// // #include<iostream>                  //Enter price of 3 items and find final value of items
// // using namespace std;
  
// //   int32_t main(){

// //       float price[3];

// //         cout<<"\nInput a price of first item :";
// //           cin>> price[0];
// //         cout<<"\nInput a price of second item :";
// //           cin>> price[1];
// //         cout<<"\nInput a price of third item :";
// //           cin>> price[2];
           
// //            cout<<"\nPrice of first item with GST :"<<price[0] + (0.18 * price[0])<<"\nPrice of second item with GST :"<<price[1] + (0.18 * price[1])<<"\nPrice of first item with GST :"<<price[2] + (0.18 * price[2]);

// //     return 0;
// //   }




// #include<iostream>                     //Find cube of a number using function
// using namespace std;

// int findCube(int num[1]);

//   int32_t main(){
      
//       int num[1];
//         cout<<"\nInput a number=";
//           cin>>num[0];

//         cout<<"\nCube is :"<<findCube(num);
        
//     return 0;
//   }

//   int findCube(int num[1]){
//     return num[0] * num[0] * num[0];
//   }




// #include<bits\stdc++.h>
// using namespace std;

// float simple_Interest(float si[3]);

//    int32_t main(){

//       float si[3];
//         cout<<"\nEnter principal=";
//           cin>>si[0];
//         cout<<"\nEnter rate=";
//           cin>>si[1];
//         cout<<"\nEnter time=";
//           cin>>si[2];

//         cout<<"\nSimple Interst="<<simple_Interest(si);
         
//     return 0;
//    }

// float simple_Interest(float si[3]){
//    return (si[0] * si[1] * si[2]) / 100;
// }




// #include<iostream>
// using namespace std;

//   int32_t main(){
      
//       int age = 25;
//       int *ptr = &age;
//         cout<<"\nAge ="<<ptr;
//       ptr++;
//         cout<<"\nNow="<<ptr;  


//       float price = 50;
//       float *xtr = &price;
//         cout<<"\nPrice="<<xtr;
//       xtr++;
//         cout<<"\nNow="<<xtr;


//       char star = '*';
//       char *ctr = &star;
//          cout<<"\nStar="<<ctr;
//       ctr++;
//         cout<<"\nNow"<<ctr;
                        
//     return 0;
//   }




// #include<iostream>             //Find Odd or Even
// using namespace std;

//   int32_t main(){
      
//      int size = 10; 
//      int value[size] = {1,2,3,4,5,6,7,8,9,10};
         
//          for (int i = 0; i < size; i++)
//          {
//             if (value[i] % 2 == 0 )
//             {
//                 cout<<"\nEven";
//             }else
//             {
//                 cout<<"\nOdd";
//             }
//          }
         
//     return 0;
//   }




 #include<iostream>                                //Linear Search
 using namespace std;

  int linerSearch(int num, int arr[], int key){
      for (int i = 0; i < arr[i]; i++)
      {
         if (arr[i] == key)
         {
             return i;
         }
      }
          return -1;
  }

   int main(){
      
       int num;
         cout<<"\nInput number=";
          cin>>num;

       int arr[num];
          for (int i = 0; i < num; i++)
          {
             cin>>arr[i];
          }
             
        int key;
          cout<<"\nEnter a key=";
           cin>>key;
             
          cout<<"Result is:"<<linerSearch(num, arr, key);   

    return 0;
   }


// #include<bits\stdc++.h>         
// using namespace std;

// int findOddorEven(int num) {
//     int arr[num];
//         for (int i = 0; i < num; i++) {
//            cin >> arr[i];
//         }

//       cout<<"\nEven numbers are=";
//           for (int i = 0; i < num; i++){
//              if (arr[i] % 2 == 0)
//              {
//                 cout<<arr[i]<<" ";
//              }
//           }

//       cout<<"\nOdd numbers are=";
//           for (int i = 0; i < num; i++){
//              if (arr[i] % 2 != 0)
//              {
//                 cout<<arr[i]<<" ";
//              }
//           }  

//     int even=0;
//     int odd=0;
//           for (int i = 0; i < num; i++)
//           {
//              if (arr[i] % 2 == 0)
//              {
//                 even++; 
//              }else
//              {
//                odd++;
//              }
//           }
//           cout<<"\nEven numbers="<<even;
//           cout<<"\nOdd numbers="<<odd;
             
//     return 0;       
// }


//   signed main() {
     
//      int num;
//        cout<<"\nEnter a number of an elements:";
//          cin>>num;

//        findOddorEven(num);
       
//     return 0;
//   }




// #include<bits\stdc++.h>
// using namespace std;


// int print_Matrix(int num_row, int num_col) {
    
//     int arr[num_row][num_col];
//         for (int i = 0; i < num_row; i++)
//         {
//            for(int j = 0; j < num_col; j++){
//               cin>>arr[i][j];
//            }
//         }

//         for (int i = 0; i < num_row; i++)
//         {
//            for(int j = 0; j < num_col; j++){
//               cout<<arr[i][j]<<" ";
//            }
//            cout<<"\n";
//         }

//     bool search=true;
//         int key;
//           cout<<"\nEnter a  key to search number in Matrix:";
//           cin>>key;

//               for (int i = 0; i < num_row; i++)
//               {
//                  for (int j = 0; j < num_col; j++)
//                  {
//                     if (arr[i][j] == key)
//                     {
//                       cout<<"\nRow:"<<i<<"\nColumn:"<<j<<endl;
//                       search=true;
//                     }
//                  }
//               }

//             if (search)
//             {
//               cout<<"\nElement found ";
//             }else
//             {
//               cout<<"\nNo element found";
//             }
            
//    return 0;    
// }


//   signed main() {

//     int num_row;
//       cout<<"\nInput Row by user=";
//         cin>>num_row;
//     int num_col;
//       cout<<"\nInput Column by user=";
//         cin>>num_col;

//       print_Matrix(num_row,num_col);

//     return 0;
//   }
