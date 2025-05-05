#include <bits/stdc++.h>
using namespace std;

// bool search(int arr[],int n,int sum){
//     for(int i=0;i<n;i++){
//         if(arr[i]==sum)return true;
//     }
//     return false;
// }

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        // vector<int>ans;
        bool found = false;
        for (int i = 0; i < n && !found; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = arr[i] + arr[j];
                if (st.find(sum) == st.end())
                {
                    // ans.push_back(arr[i]);
                    // ans.push_back(arr[j]);
                    // break;
                    cout << arr[i] << " " << arr[j] << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found)
            cout << "-1" << endl;
    }
}
