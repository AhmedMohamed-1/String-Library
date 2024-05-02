# ClsString Library

## Description
The `ClsString` library is a C++ library that provides a variety of string manipulation functions. It includes functions for counting letters, changing case, checking if a string is empty, reversing a string, and more.

## Features
- **Size**: Calculate the size of a string.
- **IsEmpty**: Check if a string is empty.
- **CountCapitalLetters**: Count the number of capital letters in a string.
- **CountSmallLetters**: Count the number of small letters in a string.
- **CountSpecificLetter**: Count the occurrences of a specific letter in a string.
- **InverseStringLettersCase**: Invert the case of all letters in a string.
- **InverseLetterCase**: Invert the case of a single letter.
- **IsLetter**: Check if a character is a letter.
- **IsUpper**: Check if a character is uppercase.
- **IsLower**: Check if a character is lowercase.
- **LowerAllString**: Convert all letters in a string to lowercase.
- **UpperAllString**: Convert all letters in a string to uppercase.
- **CountWords**: Count the number of words in a string.
- **IsSpace**: Check if a character is a space.
- **ToUpperChar**: Convert a character to uppercase.
- **ToLowerChar**: Convert a character to lowercase.
- **Lower_First_Letter_Of_Each_Word**: Convert the first letter of each word in a string to lowercase.
- **Upper_First_Letter_Of_Each_Word**: Convert the first letter of each word in a string to uppercase.
- **ReplaceWord**: Replace a word in a string with another word.
- **JoinString**: Join an array or vector of strings into a single string with a specified delimiter.
- **ReverseString**: Reverse a string.
- **ReverseWordsInString**: Reverse each word in a string.
- **IsVowel**: Check if a character is a vowel.
- **CountVowels**: Count the number of vowels in a string.
- **SetValue**: Set the value of the `_Value` variable.
- **GetValue**: Get the value of the `_Value` variable.
- **SetLetter**: Set the value of the `_Letter` variable.
- **GetLetter**: Get the value of the `_Letter` variable.

## Installation
Include the `ClsString.h` header file in your project to use the library.

## Usage
Create an instance of the `ClsString` class and call the desired function. Some functions are static and can be called directly from the class.

```cpp
#include "ClsString.h"

int main() {
    ClsString str("Hello World");
    int size = str.Size();
    return 0;
}
```
## Test Cases

1. **Lower_First_Letter_Of_Each_Word**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.Lower_First_Letter_Of_Each_Word() << endl; 
    ```
    
    ```cpp
    Output: "hello, world!"
    ```
    
2. **Upper_First_Letter_Of_Each_Word**
    ```cpp
    ClsString String("hello, world!");
    cout << String.Upper_First_Letter_Of_Each_Word() << endl;  
    ```
    
    ```cpp
    Output: "Hello, World!"
    ```
    
3. **CountCapitalLetters**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.CountCapitalLetters() << endl;
    ```
    
    ```cpp
    Output: 2
    ```
    
4. **CountSmallLetters**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.CountSmallLetters() << endl;
    ```
    
    ```cpp
    Output: 8
    ```
    
5. **CountSpecificLetter**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.CountSpecificLetter('o') << endl; 
    ```
    
    ```cpp
    Output: 2
    ```
    
6. **InverseStringLettersCase**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.InverseStringLettersCase() << endl;
    ```
    
    ```cpp
    Output: "hELLO, wORLD!"
    ```

7. **IsEmpty**
    ```cpp
    ClsString String("");
    cout << String.IsEmpty() << endl;
    ```
    
    ```cpp
    Output: 1 (true)
    ```
8. **Size**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.Size() << endl;
    ```
    ```cpp
    Output: 13
    ```

9. **IsLetter**
    ```cpp
    ClsString String('a');
    cout << (String.IsLetter() ? "True" : "False") << endl;
    ```
    
    ```cpp
    Output: True
    ```
    
10. **IsUpper**
    ```cpp
    ClsString String('A');
    cout << (String.IsUpper() ? "True" : "False") << endl;
    ```
    ```cpp
    Output: True
    ```
11. **IsLower**
    ```cpp
    ClsString String('a');
    cout << (String.IsLower() ? "True" : "False") << endl;
    ```
    ```cpp
    Output: True
    ```

12. **LowerAllString**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.LowerAllString() << endl;
    ```
    ```cpp
    Output: "hello, world!"
    ```
    
13. **UpperAllString**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.UpperAllString() << endl;
    ```
    ```cpp
    Output: "HELLO, WORLD!"
    ```
    
14. **CountWords**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.CountWords() << endl;
    ```
    
    ```cpp
    Output: 2
    ```
    
15. **IsSpace**
    ```cpp
    ClsString String(' ');
    cout << (String.IsSpace() ? "True" : "False") << endl;
    ```
    ```cpp
    Output: True
    ```

16. **ToUpperChar**
    ```cpp
    ClsString String('a');
    cout << String.ToUpperChar() << endl;
    ```
    ```cpp
    Output: 'A'
    ```

17. **ToLowerChar**
    ```cpp
    ClsString String('A');
    cout << String.ToLowerChar() << endl;
    ```
    ```cpp
    Output: 'a'
    ```

18. **ReplaceWord**
    ```cpp
    ClsString String("Hello, World!");
    cout << String.ReplaceWord("World", "ClsString") << endl;
    ```
    ```cpp
    Output: "Hello, ClsString!"
    ```
    
19. **JoinString**
    ```cpp
    string arr[] = {"Hello", "World"};
    cout << ClsString::JoinString(arr, 2, " ");
    ```
    ```cpp
    Output: Hello World
    ```
20. **JoinString**
    ```cpp
    vector<string> words1 = {"apple", "banana", "orange"};
    vector<string> words2 = {"one", "two", "three", "four"};
    vector<string> words3 = {"alpha", "beta", "gamma", "delta", "epsilon"};
    
    cout << ClsString::JoinString(words1, ", ");
    cout << ClsString::JoinString(words2, "-");
    cout << ClsString::JoinString(words3, " ");
    ```
    ```cpp
    Output:        
       "apple, banana, orange"
       "one-two-three-four"
       "alpha beta gamma delta epsilon"
    ```
21. **ReverseString**
    ```cpp
    cout << ClsString::ReverseString("Hello");
    ```
    ```cpp
    Output: olleH
    ```
22. **IsVowel**
    ```cpp
    cout << (ClsString::IsVowel('a') ? "True" : "False");
    ```
    ```cpp
    Output: True
    ```
23. **CountVowels**
    ```cpp
    cout << ClsString::CountVowels("Hello");
    ```
    ```cpp
    Output: 2
    ```
24. **InverseLetterCase**
    ```cpp
    cout << ClsString::InverseLetterCase('a');
    cout << ClsString::InverseLetterCase('B');
    ```
    ```
    Output
     A
     b
    ```
25. **ReverseWordsInString**
    ```cpp
    cout << ClsString::ReverseWordsInString("Hello World");    
    cout << ClsString::ReverseWordsInString("The quick brown fox");
    cout << ClsString::ReverseWordsInString("123 456 789");
    ```
    ```cpp
    Output:        
       "olleH dlroW"
       "ehT kciuq nworb xof"
       "321 654 987"
    ```

## Contributing

Thank you for considering contributing to the `ClsString.h` library! Contributions are what make the open-source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

### How to Contribute

1. **Fork the repository:** Click on the Fork button on the top right corner of this page to create a copy of this repository in your GitHub account.

2. **Clone the repository:** Clone the forked repository to your local machine using the `git clone` command along with the URL of your fork.

    ```bash
    git clone https://github.com/your-username/ClsString.h.git
    ```

3. **Create a new branch:** Move to the repository's directory on your local machine and create a new branch with a descriptive name for your feature or fix.

    ```bash
    git checkout -b feature/your-feature-name
    ```

4. **Make your changes:** Implement your feature or fix in the codebase. Ensure that your changes follow the coding style and conventions used in the project.

5. **Commit your changes:** Once you've made your changes, commit them to your branch with a meaningful commit message.

    ```bash
    git commit -m "Add your commit message here"
    ```

6. **Push to your fork:** Push your changes to your forked repository on GitHub.

    ```bash
    git push origin feature/your-feature-name
    ```

7. **Create a Pull Request:** Go to your forked repository on GitHub and click on the "New Pull Request" button to create a new pull request. Provide a descriptive title and detailed description for your changes. Once submitted, your pull request will be reviewed by the maintainers.

### Guidelines

- **Code Style:** Follow the existing code style and conventions used in the project.
- **Tests:** If you're adding a new feature or fixing a bug, consider adding relevant tests to ensure the changes work as expected and do not introduce regressions.
- **Documentation:** Update the documentation, including comments within the code and README file, to reflect any changes or additions.
- **Commit Messages:** Write clear and concise commit messages that describe the purpose of your changes.

### Feedback

Feedback, suggestions, and bug reports are welcome! Feel free to open an issue to report any problems or share your ideas for improving the library.

Thank you for contributing to `ClsString.h`! 🚀

