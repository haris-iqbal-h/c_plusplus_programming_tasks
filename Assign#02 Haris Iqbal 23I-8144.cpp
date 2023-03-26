#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <stdio.h>
using namespace std;
struct Student{
       int rollno;
       char name[20];       
};
int main(){
//	Question 01
	//int arr[10];
//	float sum=0, avg=0;
//	cout<<"Enter 10 Numbers :"<<endl;
//	for(int i=0;i<10;i++)
//	{
//		cin>>arr[i];
//		sum+=arr[i];
//	}
//	cout<<"Sum: "<<sum<<endl;
//	cout<<"Avreage: "<<sum/10<<endl;
	
	//Question 02
//	int arr2[10];
//	int i=0;
//	do{
//        cout<<"Enter "<<i+1<<" Number : ";
//        cin>>arr2[i];
//        i++;
//    }while(arr2[i]!=<0 && i!=10)
//    int odd[10],even[10];
//    int ecnt=0,ocnt=0
//    for(int i=0;i<10;i++){
//        if(arr2[i]%2==0)
//        {
//            even[ecnt]=arr2[i];
//            ecnt++;  
//        }else{
//            odd[ocnt]=arr2[i];
//            ocnt++;      
//        }
//    }
//    cout<<"Even Numbers: ";
//    for(int i=0;i<ecnt;i++){
//        cout<<even[i]<<" ";
//    }
//    cout<<endl;
//    cout<<"Odd Numbers: ";
//    for(int i=0;i<ocnt;i++){
//        cout<<odd[i]<<" ";
//    }
//    cout<<endl;
    
    //Questino 03
    //int A[20];
//    int B[20];
//    for(int i=0;i<20;i++){
//        cin>>A[i];
//        B[i]=A[i]*3;
//    }
//    cout<<"The Values in Array B are: "<<endl;
//    for(int i=0;i<20;i++){
//        cout<<B[i]<<" ";
//    }
//    cout<<"values in array B whish are divisible by 2: "<<endl;
//    for(int i=0;i<20;i++){
//        if(B[i]%2==0){
//             cout<<B[i]<<" ";
//        }    
//    }
//    cout<<endl;

//      Question 04
        //int arr4[10];
//        for(int i=0;i<10;i++){
//           cin>>arr4[i];
//        }
//        for(int i=0;i<10;i++){
//           if(arr4[i]%2==0){
//             arr4[i]=1;
//           }else{
//             arr4[i]=0;
//           } 
//        }
//        for(int i=0;i<10;i++){
//            cout<<arr4[i];
//        }
//        cout<<endl;
        
//        Quetion 05
          //char str[100];
//          cout<<"Enter a string : ";
//          cin.getline(str,100);
//          for(int i=0;str[i]!='\0',i++){
//              if (str[i] == ' '||str[i]=='o'||str[i]=='O'||str[i]=='z'||str[i]=='Z') {
//                 str[i] = str[i];
//              } else {
//                str[i] = str[i] + 1;
//              }
//          }
//          cout<<str;

            //Question 06
            //int size;
//            cout<<"Enter size of array: "
//            cin>>size;
//            int arr6[size];
//            cout<<"Enter the elements of the array:";
//            for(int i=0;i<size;i++){
//                cin>>arr6[i];
//            }
//            int search;
//            cout<<"Enter the value to search";
//            cin>>search;
//            cout<<seacrh<<" exist in index:";
//            for(int i=0;i<size;i++){
//                if(arr6[i]==search){
//                    cout<<i<<" ";
//                }
//            }
//            cout<<endl;
//            Question 07
              //int arr7[4];
//              cout<<"Enter 4 Numbers"<<endl;
//              
//              for(int i=0;i<4;i++){
//                cin>>arr7[i];
//                if(arr7[i]<0)  {
//                   i--;               
//                }     
//              }
//              cout<<"Square: ";
//              for(int i=0;i<4;i++){
//                cout<<arr7[i]*arr7[i]<<" ";
//              }
//              cout<<"Cube: ";
//              for(int i=0;i<4;i++){
//                cout<<arr7[i]*arr7[i]*arr7[i]<<" ";
//              }
//              cout<<"Factorial: ";
//              for(int i=0;i<4;i++){
//                int fact=1; 
//                for(int j=1;j<=arr7[i];j++){
//                    fact*=j;    
//                }
//                cout<<fact<<" ";
//              }
//              Question 08
                //int arr81[3],arr82[3],arr83[6];
//                cout<<"Enter First Array :";
//                for(int i=0;i<3;i++){
//                   cin>>arr81[i];
//                }
//                cout<<"Enter Second Array :";
//                for(int i=0;i<3;i++){
//                   cin>>arr82[i];
//                }
//                
//                cout<<" Third Array :";
//                for(int i=0;i<6;i++){
//                   if(i<3)
//                      arr83[i]=arr81[i];
//                   else 
//                      arr83[i]=arr82[i-3];
//                }
//                for(int i=0;i<6;i++){
//                   cout<<arr63[i]<<" ";       
//                }
//                cout<<endl;
//              Question 09
                //char arr9[100];
//                cout<<"Enter a String"<<endl;
//                cin.getline(arr9,100);
//                int sm=0,cap=0;
//                for(int i=0;arr9[i]!='\0'){
//                    if(arr9[i]>=97 && arr09[i]<=122){
//                       arr9[i]-=32;
//                       sm++;
//                    }else{
//                       arr9[i]+=32;  
//                       cap++;    
//                    }
//                }
//                cout<<arr9[100]<<endl;
//                cout<<"Small Letters: "<<sm<<endl;
//                cout<<"Capital Letters: "<<cap<<endl;
                
//              Question 10
                Student std[5];
                cout<<"Enter Rollno of students"<<endl;
                for(int i=0;i<5;i++){
                    cin>>std[i].rollno;
                }
                cout<<"Enter Name of students"<<endl;
                for(int i=0;i<5;i++){
                    cin>>std[i].name;
                }
                int rsrch;
                cout<<"Enter Rollno to Seacrh"<<endl;
                cin>>rsrch;
                for(int i=0;i<5;i++){
                    if(std[i].rollno==rsrch){
                      cout<<"Studemt Name :"<<std[i].name<<endl;
                      cout<<"Studemt Roll Number :"<<std[i].rollno<<endl;                        
                    }
                }
                
                
	
	return 0;
}

