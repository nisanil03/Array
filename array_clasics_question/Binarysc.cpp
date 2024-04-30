#include <bits/stdc++.h>

using namespace std;

int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start+(end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        //element found than return index
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            // search in right
            start = mid + 1;
        }
        mid = start + (end-start) / 2;
    }
    // element not found
    return -1;
}
int main()

{
   /*int arr[ ] = {2,
                 4,
                 6,
                 8,
                 10,
                 12,
                 14,
                 16,
                 18};
      int size = 9;
    int target = 18;            
     int indexoftarget = binarysearch(arr, size, target);

    if (indexoftarget == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at"<<" "<< indexoftarget << " " <<"index" << endl;
    }*/
   vector<int> v{1,2,3,4,5,6,7,8};
   int arr[]={1,2,3,4,5,6,7,8};
   int size=8;
   if(binary_search(arr,arr+size,30)){
    cout<<"found"<<endl;
   }
   else{
    cout<<"not found"<<endl;
   }



   return 0;
}