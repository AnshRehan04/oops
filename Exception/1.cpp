#include<stdexcept>

class Division
{
    int num,den;
    public:
    Division(int n,int d):num(n),den(d);
    
    double divide()
    {
        if(den==0)throw logic error("Divide by 0 not possible\n");
        return num/(double) den;
    }
   // Division(int n,int den){
    //     this->num=num;
    //     this->den=den;
    // }
}; 
int main()
{
    int num,den;
    cin>>num>>den;
    division div(num,den);
    try{
        
    }
}