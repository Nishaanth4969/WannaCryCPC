//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        int mx=a[0];
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(a[i] == mx){
                cnt++;
            }
            else{
                cnt--;
                if(cnt == 0){
                    mx = a[i];
                    cnt=1;
                }
            }
        }
        int c = 0;
        for(int i=0;i<n;i++){
            if(a[i] == mx){
                c++;
            }
        }
        if(c>n/2)return mx;
        return -1;
        
    }
};


//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends