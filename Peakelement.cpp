// class Solution
// {
//     public:
//     //Brute force approach 
//     //T.C -> O(N)
//     //S.c -> O(1)
    
//     // int peakElement(int arr[], int n)
//     // {
//     //      for( int i = 0  ; i < n - 1 ; i++)
//     //       {
//     //           if( arr[i] > arr[i+1])
//     //           {
//     //               return i ;
//     //           }
//     //       }
          
//     //       return n-1 ;
//     // }
    
//     // Better optimized approach
//     //T.C -> O(logn)
//     //S.c -> O(1)
    
//      int peakElement(int arr[], int n)
//    {
//       // Your code here.
//       int low = 0;
//       int high = n-1;
      
//       while(low<=high)
//       {
//         int mid = (low+high)/2;
        
//         if((mid == 0 || arr[mid]>= arr[mid-1]) && (mid == n-1 || arr[mid]>=arr[mid+1]))
//         {
//             return mid;
//         }
//         else if(arr[mid]<=arr[mid+1]){
//             low = mid+1;
//         }else{
//             high = mid-1;
//         }
//       }
//       return -1;
//    }
    
// };