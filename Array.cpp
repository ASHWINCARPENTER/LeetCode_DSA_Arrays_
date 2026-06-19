/*
Q1. Output an array

#include <iostream>
using namespace std;

     int main(){
     int arr[7]= {12,33,45,67,89,21,43};
     
     for (int i = 0; i < 7; i++){
          cout << arr[i]<< " ";
     }
     return 0;
}
*/


/* Q2. Input an array

#include <iostream>
using namespace std;

      int main(){
      int size;
      cout << "Enter size of array : ";
      cin >> size; 


      cout << "Enter the element of the array: ";
      int nums[size];
      for (int i = 0; i < size; i++){
          cin >> nums[i];
      }

      cout << "The numbers of array are : ";

      for (int i = 0; i < size; i++){
        cout << nums[i] << " ";
      }
      cout << endl;
      cout << "Size of array is : " << size;
       
      return 0;
}
      */



    /*   Q3. Smallest no.

    #include <iostream>
    using namespace std;

    int main(){
     int size;
     cout << "Enter size of array : "<< endl;
     cin >> size;

     int nums[size];
     cout<< "Enter elements of Array : " << endl;
     for(int i = 0; i < size -1 ; i++){
        cin >> nums[i];
     }
     
     cout<< endl;
      
     cout << "Ur entered elements are : "; 
     for(int i = 0; i < size - 1; i++){
        cout << nums[i] << " ";
     }
     cout << endl;

     //maximum no.
     int smallest = nums[0];
     for (int i = 0; i < size - 1; i++){
        if(nums[i] <= smallest){
            smallest = nums[i];
          }
     }
     cout << "Smallest no. in array is: " << smallest;
        return 0;
    }
        */


        // Q4. Pass By Reference
        // Q5. Linear Search
        // Q6. Vectors
        // Q7. SubArrays 