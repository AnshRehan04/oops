// WAP to remove the vowels from the string
#include <iostream>
#include <string>
using namespace std;
string removevowels(string name){
    int n=name.length();
    for (int i = 0; i < n; i++)
    {
        // Checking vowels
        if (name[i]=='a' ||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='U'||name[i]=='O')
        {
            for (int j = i; j< n; j++)
            {
                // Removing vowels.
                name[j]=name[j+1];
            }
            n--;
        }
    }
    return name;
}
int main(){
    string name;
    cout<<"Enter the string ";
    getline(cin,name);
    cout<<"After removing vowels "<<removevowels(name);

}