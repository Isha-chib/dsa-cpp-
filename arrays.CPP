// # include <iostream>
// #include <climits> 
// using  namespace  std;

// int main(){
// int nums[] = {5,4,3,2,1,-2,6};
// int size = 7;

// int minIndex= 0;
// int smallest = INT_MAX;

// for(int i=0;i<size;i++){
//     if (nums[i]<smallest){
//         smallest = nums[i];
//         minIndex=i;
//     }

// }
//  cout << "Smallest value = " << smallest << " at index " << minIndex << endl;

// return 0;
// }


# include <iostream>
#include <climits> 
using  namespace  std;

int main(){
int nums[] = {0,4,29,2,1,};
int size = 5;

int maxIndex= 0;
int largest = INT_MIN;

for(int i=0;i<size;i++){
    if (nums[i]>largest){
       largest=nums[i];
        maxIndex=i;
    }

}
 cout << "largest value= " << largest<< " at index " << maxIndex << endl;

return 0;
}

