class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
      
      unordered_map<int,int> umap ; 
     
     vector<int> ans ;
      
     for( int i = 0 ; i < n ; i++ )
      {
          umap[arr[i]] ++ ;
      }
      
      for( auto x : umap)
       {
           if( x.second > 1)
            {
              ans.push_back(x.first) ;    
            }
       }
       
       if(ans.size()==0) ans.push_back(-1) ;
       
       sort(ans.begin() , ans.end()) ;
      
      return ans ;
    }
};
