//#include<iostream>
//using namespace std;

// sum of numbers from 1 to n;
//int sumN (int n){
   // int sum = 0;

   // for (int i = 1; i<=n; i++){
    //sum += i ;
   
    //}
     ////return sum;
    

//}

//int main()  {
   // cout<<sumN(5)<<endl;
   // cout<<sumN(10)<<endl;

       // return 0;

   // calculate n factorial;
    
   #include<iostream>
   using namespace std;

   int calculateF (int n){
    int calculateF = 1;

    for (int i=1;i<=n;i++){
        calculateF*=i;

    }
    return calculateF;
   }

   int main() {
    //function call
    cout<<calculateF(2)<<endl;
   }

