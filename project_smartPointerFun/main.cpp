 #include <iostream>
 #include <string>
 #include <memory>

 using namespace std;

 int main()
 {
    const int ARR_SIZE = 10;
    unique_ptr<double> myDubPtr(new double);
    auto myArray = make_unique<int[]>(ARR_SIZE);

    *myDubPtr = 3.14;
    cout << "Address: " << myDubPtr << " holds the value: " 
        << *myDubPtr << endl;

    unique_ptr<double> otherPtr = move(myDubPtr);
    cout << "Address: " << otherPtr << " holds the value: "
        << *otherPtr << endl;

    for (int i = 0; i < ARR_SIZE; i++)
    {
        myArray[i] = i * 2;
    }

    auto myArray2 = move(myArray);

    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }ß

     return 0;
 }