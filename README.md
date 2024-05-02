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

