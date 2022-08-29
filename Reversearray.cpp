#include<bits/stdc++.h>
using namespace std;

void optimized( int arr[] , int n )
{
   int start = 0 ; 
   int end = n- 1 ;
   
   while( start  < end)
   {
       swap(arr[start], arr[end]) ;
       start++ ;
       end-- ;
   }
   
   
   for( int i = 0 ; i < n ; i++ )
    {
        cout << arr[i] << " " ;
    }
 
  
}

int main() {
	//code
	
	
	int T;
	cin >> T ;
	while( T-- )
	{
	    int N ;
	    cin >>  N ;
	    
	    int arr[100] ;
	    for( int i = 0 ; i < N ; i++ )
	     {
	         cin >> arr[i] ;
	     }
	     
	     /*There are two to three approaches to solve this problem*/
	     /*1-just print in the reverse order from n-1 to 0   T.C - O(N)  S.C - O(1)*/
	     /*2-save it in the another array in from n-1  to  0  T.C - O(N) S.C - O(N)*/
	     /*3-use the two pointer approach T.C - < N and SC - O(1) */
	     
	     
	     
	    optimized( arr  , N ) ; // T.c-> O(N) & S.C -> O(1)
	    
	    cout << endl ;
	}
	
	
	
	
	return 0;
}