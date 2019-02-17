#include <iostream>
#include <string>

using namespace std;

string encrypt(string, int);

int main(){

    string input, output;
    int shift;

    cout << "Input: ";
    getline(cin, input);
    cout << "Shift: ";
    cin >> shift;

    output = encrypt(input, shift);

    cout << "Output: " << output << endl;
}

string encrypt(string input, int shift){

    string output = "";

    for(int i = 0; i < input.length(); i++){
        if(isalnum(input[i])){
            if(isupper(input[i]))
                output += char(int(input[i]+shift-65)%26 + 65);
            else
                output += char(int(input[i]+shift-97)%26 + 97);
        }
        else
            output += input[i];
    }
    return output;
}
