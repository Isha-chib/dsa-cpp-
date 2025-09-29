// questions no. 1 =>
//sum of numbers from 1 to n ?

//# include <iostream>
//using  namespace  std;
//int main(){
    //int n =100;
   // int sum = 0;
   // for(int i=0; i<=n; i++){
    //sum+= i;
   // if(i==50){
     //   break;
   // }
   // }
   // cout<<sum;
  //  return 0;
//}

//for difference 

//# include <iostream>
//using  namespace  std;
//int main(){
    //int n =5;
    //int difference = 0;
    //for(int i=0; i<=n; i++){
    //    difference -= i;
    //}
    //cout<<difference;
    //return 0;
//}


// questions number 2.=>
//sum of all odd numbers from 1 to n ??

# include <iostream>
using  namespace  std;
int main (){
    int n = 10;
    int oddsum = 0 ;
    for(int i = 0; i<=n;i++){
        
        if(i%2!=0){
            oddsum+=i;
            
        }
    }
    cout<<"odd sum:"<<oddsum <<endl;
    return 0 ;
}


