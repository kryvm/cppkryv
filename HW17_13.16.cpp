#include <iostream>
#include <ctype.h>
#include <sstream>
#include <string>
using namespace std;

string change(string& s){
    string str;
    stringstream ss;
    ss << s;
    while (ss.good()) {
        string word;
        ss >> word;
        if (ss.fail())
            break;
        if ((word == "the") || (word == "a") || (word == "an")) {
            str += word + " ";
            ss >> word;
            word.front() = tolower(word.front());
            str += word + " ";
        }
        else
            str += word + " ";
    }
    return str;
}

int main() {
    string str = "an Apple water door the Collapse a watermelon money";
    cout << str << endl;
    cout << change(str) << endl;
    return 0;
}