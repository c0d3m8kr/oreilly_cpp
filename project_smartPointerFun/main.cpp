 #include <iostream>
 #include <string>
 #include <memory>

 using namespace std;

 int main()
 {
    unique_ptr<double> myDubPtr(new double);

    *myDubPtr = 3.14;

    cout << "Address: " << myDubPtr << " holds the value: " 
        << *myDubPtr << endl;

     return 0;
 }