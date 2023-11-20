#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    string sentence = "hello Jee kaise ho saare";
    string target = "ka";

    string targetOne = "Everyone";

    cout << sentence.find(target) << endl;// 
    cout << sentence.find(targetOne) << endl;//? not found , nops
    if (sentence.find(targetOne) == string::npos)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}