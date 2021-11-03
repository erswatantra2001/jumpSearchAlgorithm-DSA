#include <iostream>
#include<math.h>
using namespace std;

int jumpSearchAlgo(int *arr,int n,int key){
  int jump = sqrt(arr[0]);
  int low;
  for(int i = 0;i < n;i++){
    if(arr[i] == key){
      return i;
    }
    else if(arr[i] < key){
      low = i;
    }
    else{
      break;
    }
  }

  for(int i = low;i < n;i++){
    if(arr[i] == key){
      cout << "element found at index " << i << endl;
    }
  }

  return 0;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }

  int key;
  cin >> key;

  jumpSearchAlgo(arr,n,key);
  return 0;
} 