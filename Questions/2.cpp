#include <iostream>
#include <string>
using namespace std;
class SecretBase
{
private:
    string location;
    int securityLevel;

public:
    // Default constructor
    SecretBase() : location("Unknown"), securityLevel(0)
    {
        cout << "SecretBase created at " << location << " with security level " << securityLevel << endl;
    }

    // Destructor
    ~SecretBase()
    {
        cout << "Destroying SecretBase at " << location << " with security level " << securityLevel << endl;
    }

    // Getter functions
    string getLocation() const
    {
        return location;
    }

    int getSecurityLevel() const
    {
        return securityLevel;
    }

    // Setter functions
    void setLocation(const string &newLocation)
    {
        location = newLocation;
    }

    void setSecurityLevel(int newSecurityLevel)
    {
        securityLevel = newSecurityLevel;
    }
};

int main()
{
    // Create a SecretBase object using the default constructor
    SecretBase secretBase;

    // Access and modify attributes
    cout << "Initial Location: " << secretBase.getLocation() << endl;
    cout << "Initial Security Level: " << secretBase.getSecurityLevel() << endl;

    secretBase.setLocation("Hidden Island");
    secretBase.setSecurityLevel(5);

    cout << "Updated Location: " << secretBase.getLocation() << endl;
    cout << "Updated Security Level: " << secretBase.getSecurityLevel() << endl;

    // The destructor will be called automatically when the object goes out of scope
    // or when explicitly deleted (not shown in this example)

    return 0;
}
