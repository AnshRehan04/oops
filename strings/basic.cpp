#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
    // string name="ansh rehan";
    // cout<<name;

    // Take input string.
    // string name;
    // getline(cin,name);///getline is use to take input including spaces
    // cout<<name;

    // string str1="Ansh";
    // string str2="Rehan";
    // cout<<str1+str2;//Two string can be add(concate) Output=AnshRehan

    // Iterating string as array.
    // string name="Ansh";
    // int n=name.length();  //Length of name =4;
    // cout<<name[0];  //A
    // cout<<name[1];  //N
    // cout<<name[4];  //If it is out of index it does not give error.
    
    // Convert character into thei ascii value
    
    // char name='b';  //For that we have to use char not string
    // cout<<int(name);  //ascii value of 'a' will be printed.  Output=97

    // String uses dynamic memory allocation.
    //Char uses static memory allocation.
    // Strings implementation is slow as compare to character of arrays.

    // string str;
    // cout<<"Enter the string ";
    // getline(cin,str);;  
    // reverse(str.begin(),str.end());   //Reverse keyword is used to reverse the string.
    // cout<<str<<" ";   //Time complexity of rev is O(length of string);

    // cout<<str.substr(1,5);  //str.substr(position(starting-index),length);  ans will be printed if input is ansh
    // cout<<str.substr(0); //If we don't provide the length of the string but only provide the starting index then it will print the whole string.

    // Time complexity of substr is O(length);

    // Strcat:It is used to concate two char.

    // char str1[5]="ansh";
    // char str2[6]="rehan";
    // strcat(str1,str2);
    // cout<<str1;

    // push_back() :It is used to push char at the end of the string.
    
    // string str="ansh";
    // char ch='re';
    // str.push_back(ch);
    // cout<<str;

    // size(),length() is used to find out the length of string
    // string ch="ansh";
    // cout<<ch.size();  //4
    // cout<<ch.length();  //4

    // strlen is used to find the size of character array
    // char name[5]="ansh";
    
    // cout<<strlen(name);

    int num=42;
    // cout<<to_string(num);
    string str=to_string(num);
    str+="123";   //If we want to add string to another string like a number to a string we can use in this way.
    cout<<str;



}