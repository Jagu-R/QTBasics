#include <iostream>

using namespace std;
//Function
void funcName(string nme){
    cout << "Hello " <<  nme << " I'M funcName\n";
}

// Function Overloading - same Function Name with different Parameters

int myFunction(int x,int y){
    return x+y;
}
float myFunction(float x,float y){
    return x+y;
}
int myFunction(double x,double y){
    return x+y;
}
string myFunction(string x,string y){
    return x+y;
}

int main()
{
    string nmefromMain;
getline (cin,nmefromMain);
    cout << "Functions Topic" << endl;
    cout << myFunction(1 , 2)<<endl;
    cout << myFunction(1.4 , 2.5)<<endl;
    cout <<myFunction("helo" , " jaganathan")<<endl;


  funcName(nmefromMain);


    return 0;
}
