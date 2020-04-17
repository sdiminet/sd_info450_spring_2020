#include "main.cpp"
#include "sorter.h"

void sort_vector(vector<int> *v){
  int i, j;
  vector<int>& local_vector = *v;
  cout << " : " << &local_vector << endl;
  int length = local_vector.size();
  for (i = 0; i < length-1; i++){
     for (j = 0; j < length-i-1; j++){
       if (local_vector[j] > local_vector[j+1]){
         // cout << " Swapping: " << local_vector[j] << " : " << local_vector[i] << endl;
         int temp = local_vector[j];
         local_vector[j] = local_vector[j+1];
         local_vector[j+1] = temp;
       }
     }
  }
}