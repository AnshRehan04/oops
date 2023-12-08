#include <iostream>
#include <string>
using namespace std;
class SecretBase{
    private:
    string BaseLevel;
    int securityLevel;
    public:
    SecretBase():BaseLevel("Unknown"),securityLevel(0){
        cout<<"A secret Base with "<<BaseLevel<<"and security level "<<securityLevel;
    }
    ~SecretBase(){
        cout<<"Destroying secret class "<<BaseLevel<<"at security level "<<securityLevel; 
    }
    string BaseLevel1(){
        return BaseLevel;
    }
    int securityLevel1(){
        return securityLevel;
    }

    void getlocation(string newlocation){
        BaseLevel=newlocation;
    }
    void getsecurity(int security){
        securityLevel=security;
    }
};
int main(){
    SecretBase obj;
    cout<<"initial "<<obj.BaseLevel1()<<endl;
    cout<<"Initial security"<<obj.securityLevel1()<<endl;
    
    obj.getlocation("Unknown ");
    obj.getsecurity(0);

    cout<<"Updated "<<obj.BaseLevel1()<<endl;
    cout<<"Updated security"<<obj.securityLevel1()<<endl;
}