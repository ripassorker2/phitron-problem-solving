#include <iostream>
#include <string>

int main()
{
    // Input string
    std::string input = "ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ";

    // Substring to be replaced
    std::string toReplace = "EGYPT";

    // Replacement string
    std::string replacement = " ";

    // Find the position of the substring
    size_t pos = input.find(toReplace);

    // Check if the substring is found
    if (pos != std::string::npos)
    {
        // Replace the substring with a space
        input.replace(pos, toReplace.length(), replacement);
    }

    // Output the modified string
    std::cout << input << std::endl;

    return 0;
}
