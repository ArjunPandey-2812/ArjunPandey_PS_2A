// Finding Anagrams: There are two strings. Find out which characters should be deleted such that both strings contain the same characters (May be in different Order)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s1,s2;
    cin>>s1>>s2;
    int arr[26]={0};

    for(int i=0;i<s1.length();i++)
    {
        arr[s1[i]-97]++;
    }

    for(int i=0;i<s2.length();i++)
    {
        arr[s2[i]-97]--;
    }

    for(int i=0;i<26;i++)
    {
        count = count + abs(arr[i]);
    }

    cout<<count;

    // cout<<"Elements Need To Be Deleted:\n";
    // for(int i=0;i<26;i++)
    // {
    //     if(arr[i]!=0)
    //     {
    //         cout<<(char)(97+i)<<" ";
    //     }
    // }
    
   return 0;
}