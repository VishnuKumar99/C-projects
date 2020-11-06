#include<bits/stdc++.h>
using namespace std;
int getIndex(int arr[], int n, int k)
{
  int index = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      index = i;
      break;
    }
  }
  return index;
  }
  int main()
  {
    int t;
    cin >> t;
    while (t--)
    {
      int n, k;
     cin>>n>>k;
      int arr[n];
      for (int i = 0; i < n;i++)
        cin>>arr[i];
      int ind = getIndex(arr, n, k);
      if(ind==-1)
        cout<<"0\n";
        else
        {
          int sum1=0,sum2=0;
          for (int i = 0; i < ind;i++){
            sum1 += arr[i];
          }
          for (int i = ind + 1; i < n;i++){
            sum2 += arr[i];
          }
         cout<<sum1<<" "<<sum2<<"\n");
        }   
    }
    return 0;
    
}