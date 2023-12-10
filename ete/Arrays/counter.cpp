// Identify all the individuals in a group whose performance or achievement is surpassed by at
// least two other members.
// For example, consider a sports team where each player's score represents their performance in a
// game. Your task is to find and list the players who were outperformed by at least two of their
// teammates in the same match.
// Original array: 7 12 9 15 19 32 56 70
// Elements which have at-least two greater elements: 7 12 9 15 19 32

#include <iostream>
#include <vector>
using namespace std;
vector<int> counter(int arr[]){
    vector<int> ans;
    
    for (int  i = 0; i < 10; i++)
    {
        int count=0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[j]>arr[i])
            {
                count++;
            }
        }
        if (count>=2)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    int arr[10]={7, 12, 9, 15, 19, 32, 56, 90,100,34};
    // counter(arr);
    vector<int> result=counter(arr);
    for(int it:result){
        cout<<it<<" ";
    }
}