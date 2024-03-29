//{ Driver Code Starts
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;


// Sollution by Ansh Raj
// email: theanshchaurasiya@gmail.com


// } Driver Code Ends
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long maxSum = arr[0];
        long long currentSum = arr[0];
        
        for (int i = 1; i < n; i++) {
            currentSum = max((long long)arr[i], currentSum + arr[i]);
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};


//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends


// Sollution by Ansh Raj
// email: theanshchaurasiya@gmail.com