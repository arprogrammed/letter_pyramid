#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

int main () {
    // Initialized string and user_in for the user input
    string user_in{};
    cout << "Enter a string of charecters: ";
    getline(cin, user_in);

    // Initialized the size_t for the input and set length
    // Also initialized outputs for the letter pyramid
    size_t input_len{user_in.length()-1};
    string output_line1{};
    string output_line2{};

    // Main For loop to handle looping the user_in
    // Creates pyramid mainly through string class methods
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
        // Main line by line output concat with operator
        cout << (output_line1 + output_line2) << endl;
    }
    
    
    return 0;
}
