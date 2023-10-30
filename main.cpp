#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

int main () {
    
    string user_in{};
    cout << "Enter a string of charecters: ";
    getline(cin, user_in);

    size_t input_len{user_in.length()-1};
    string output_line1{};
    string output_line2{};
    
    for(size_t i{0}; i <= input_len; ++i) {
        char new_char{user_in.at(i)};
        if(i == 0) {
            output_line1.insert(output_line1.end(), new_char);
            output_line1.insert(output_line1.begin(), input_len, ' ');
        } else {
            output_line1.insert(output_line1.end(), new_char);
            output_line2.insert(output_line2.begin(), user_in.at(i-1));
            output_line1.erase(output_line1.begin());
        }
        cout << (output_line1 + output_line2) << endl;
    }
    
    
    return 0;
}