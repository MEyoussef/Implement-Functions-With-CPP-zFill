#include <iostream>
using namespace std;

/**
 * @brief This function fills the target string with a specified
 * character to reach the required length.
 *
 * @param required_length is the total length required for the result
 * @param target is the string to be filled
 * @param whatever_You_wantTo_insert_before_target is the character to be
 * inserted before target
 *
 * @return the filled string
 */
string zFill(int required_length, string target,
             string whatever_You_wantTo_insert_before_target)
{
    string result = "";                    // final string
    int str_len = target.length();        // length of target
    int loop = required_length - str_len; // number of times to repeat

    // add characters before target to reach required length
    for (int i = 0; i < loop; i++)
    {
        result += whatever_You_wantTo_insert_before_target;
    }

    // add target string to the result
    for (char ch : target)
    {
        result += ch;
    }

    return result;
}

int main()
{
    cout << zFill(7, "150", "@") << endl;    // 000150
    cout << zFill(7, "6550", "@") << endl;   // 006550
    cout << zFill(7, "155650", "@") << endl; // 155650
    return 0;
}