
 #include <iostream>
 using namespace std;

 int binarySearchSteps(int arr[], int n, int key, int &steps) {
     int low = 0, high = n - 1;
     steps = 0;

     while (low <= high) {
         steps++;
         int mid = low + (high - low)/2;

         if (arr[mid] == key)
             return mid;
         else if (key < arr[mid])
             high = mid - 1;
         else
             low = mid + 1;
     }
     return -1;
 }

 int main() {
     int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
     int keys[2] = {70, 5};
           cout<<"IF INDEX IS LESS THAN 0 means value not found in array\n\n";

     for (int i = 0;i < 2;i++) {
         int steps;
         int pos = binarySearchSteps(arr, 10, keys[i], steps);

         cout<< "Key " << keys[i] << ": index " << pos
              << ", Binary Search Steps = " << steps
              << " (linear search worst case = 10)"<<endl;
     }

     return 0;
 }
