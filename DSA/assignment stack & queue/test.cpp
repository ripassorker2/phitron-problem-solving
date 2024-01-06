#include <iostream>
#include <stack>
#include <string>

bool isEmptyAfterEliminations(const std::string &binaryString)
{
    std::stack<char> charStack;

    for (char ch : binaryString)
    {
        if (ch == '1')
        {
            // If the current character is '1', check if the stack is not empty and pop the previous '0'
            if (!charStack.empty() && charStack.top() == '0')
            {
                charStack.pop();
            }
            else
            {
                // If no '0' to eliminate, push the '1' onto the stack
                charStack.push(ch);
            }
        }
        else
        {
            // If the current character is '0', push it onto the stack
            charStack.push(ch);
        }
    }

    // If the stack is empty after processing all characters, the string will be empty after eliminations
    return charStack.empty();
}

int main()
{
    std::string binaryString = "1001101";
    bool result = isEmptyAfterEliminations(binaryString);

    std::cout << "Will the string be empty after eliminations? " << (result ? "Yes" : "No") << std::endl;

    return 0;
}
