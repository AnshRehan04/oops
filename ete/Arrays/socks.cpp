// Imagine you have a collection of paired items, like socks. Each sock in the collection has a
// matching pair, except for one lone sock. Your goal is to identify that single unmatched sock, but
// you can only examine the socks one at a time, and you're not allowed to use any extra storage
// (like a separate bin for unmatched socks). How can you find the unmatched sock using the
// fewest possible actions and no extra containers?
// Input: arr = {1, 2, 3, 2, 3, 1, 3}
// Output: 3
// Input: arr = {5, 7, 2, 7, 5, 2, 5}
// Output: 5
#include <iostream>
using namespace std;
int main(){
    int arr[10]={5, 7, 2, 7, 5, 2, 5};
    int res=0;
    for (int i = 0; i <7; i++)
    {
        res=res^arr[i];
    }
    cout<<res;
    
}

