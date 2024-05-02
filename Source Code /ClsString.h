#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class ClsString
{
private:
	string _Value = "";
	char _Letter = ' ';

protected:
	static string ExtractWordFromString(const string& str, short start, short length) {
		string result = "";
		for (int i = start; i < start + length; ++i) {
			result += str[i];
		}
		return result;
	}


public:

	ClsString(string value) { _Value = value; };
	ClsString(char value) { _Letter = value; };
	ClsString() {};

	void SetValue(string Value) {
		_Value = Value;
	}
	string GetValue() {
		return _Value;
	}

	void SetLetter(char Letter) {
		_Letter = Letter;
	}
	char GetLetter() {
		return _Letter;
	}

	__declspec(property(get = GetValue,  put = SetValue)) string Value;
	__declspec(property(get = GetLetter,  put = SetLetter)) char Letter;

	static int Size(string size) {
		int _SizeCounter = 0;
		for (char c : size) {
			_SizeCounter++;
		}
		return _SizeCounter;
	}
	int Size() {
		return Size(_Value);
	}


	static bool IsEmpty(string Empty){
		int _SizeCounter = Size(Empty);
		int _IsEmpty = 0;

		for (int i = 0; i < _SizeCounter; i++)
		{
			if (Empty[i] == ' ')
			{
				_IsEmpty++;
			}
		}
		if (_IsEmpty == _SizeCounter)
		{
			return true;
		}

		return false;
	}
	bool IsEmpty()
	{
		return IsEmpty(_Value);
	}
	

	static int CountCapitalLetters(string CountCapital)
	{
		int _Capital = 0;
		int _SizeCounter = Size(CountCapital);
		for (int i = 0; i < _SizeCounter; i++)
		{
			for (int g = 'A'; g <= 'Z'; g++)
			{
				if (CountCapital[i] == g) {
					_Capital++;
				}
			}
		}

		return _Capital;
	}
	int CountCapitalLetters() {
		return CountCapitalLetters(_Value);
	}


	static int CountSmallLetters(string CountSmall)
	{
		int _Small = 0;
		int _SizeCounter = Size(CountSmall);
		for (int i = 0; i < _SizeCounter; i++)
		{
			for (int g = 'a'; g <= 'z'; g++)
			{
				if (CountSmall[i] == g) {
					_Small++;
				}
			}
		}

		return _Small;
	}
	int CountSmallLetters() {
		return CountSmallLetters(_Value);
	}


	static int CountSpecificLetter(string Word , char Letter) {
		int _LetterCounter = 0;
		for (int i = 0; i < Size(Word); i++)
		{
			if (Word[i] == Letter) {
				_LetterCounter++;
			}
		}
		return _LetterCounter;
	}
	int CountSpecificLetter(char Letter) {
		return CountSpecificLetter(_Value , Letter);
	}


	static string InverseStringLettersCase(string Word) {
		string _InversedLetters = "";
		for (int i = 0; i < Size(Word); i++)
		{
			if (Word[i] >= 'A' && Word[i] <= 'Z')
			{
				_InversedLetters += (Word[i] + ' ');
			}
			else if (Word[i] >= 'a' && Word[i] <= 'z')
			{
				_InversedLetters += (Word[i] - ' ');
			}
			else
			{
				_InversedLetters += Word[i];
			}
		}
		return _InversedLetters;
	}
	string InverseStringLettersCase() {
		return InverseStringLettersCase(_Value);
	}


	static char InverseLetterCase(char Letter) {
		char InversedLetter = ' ';
		if (Letter >= 'A' && Letter <= 'Z')
		{
			InversedLetter = (Letter + ' '); // int(' ') ---> 32
		}
		else if (Letter >= 'a' && Letter <= 'z')
		{
			InversedLetter = (Letter - ' '); // int(' ') ---> 32
		}
		else
		{
			InversedLetter = Letter;
		}
		return InversedLetter;
	}
	char InverseLetterCase() {
		return InverseLetterCase(_Letter);
	}

	static bool IsLetter(char Letter) {
		if ((Letter >= 'A' && Letter <= 'Z') || (Letter >= 'a' && Letter <= 'z'))
		{
			return true;
		}
		return false;
	}
	bool IsLetter()
	{
		return IsLetter(_Letter);
	}
	
	static bool IsUpper(char Letter) {
		if (Letter >= 'A' && Letter <= 'Z')
		{
			return true;
		}
		return false;
	}
	bool IsUpper()
	{
		return IsUpper(_Letter);
	}
	
	static bool IsLower(char Letter) {
		if (Letter >= 'a' && Letter <= 'z')
		{
			return true;
		}
		return false;
	}
	bool IsLower()
	{
		return IsLower(_Letter);
	}

	static string LowerAllString(string Word) {
		string _LowerCaseString = "";
		for (int i = 0; i < Size(Word); i++)
		{
			if (IsUpper(Word[i]))
				_LowerCaseString += InverseLetterCase(Word[i]);
			else
				_LowerCaseString += Word[i];
		}
		return _LowerCaseString;
	}
	string LowerAllString() {
		return LowerAllString(_Value);
	}

	
	static string UpperAllString(string Word) {
		string _UpperCaseString = "";
		for (int i = 0; i < Size(Word); i++)
		{
			if (IsLower(Word[i])) {
				_UpperCaseString += InverseLetterCase(Word[i]);
			}
			else
			{
				_UpperCaseString += Word[i];
			}
		}
		return _UpperCaseString;
	}
	string UpperAllString() {
		return UpperAllString(_Value);
	}


	static int CountWords(string Word) {
		int _Counter = 0;
		for (int i = 0; i <= Size(Word); i++)
		{
			if (Word[i] == ' ' || i == Size(Word)) {
				_Counter++;
			}
		}
		return _Counter;
	}
	int CountWords() {
		return CountWords(_Value);
	}


	static bool IsSpace(char Space) {
		if (Space == ' ')
		{
			return true;
		}
		return false;
	}
	bool IsSpace() {
		return IsSpace(_Letter);
	}


	static char ToUpperChar(char c) {
		return IsLower(c) ? c - 32 : c;
	}
	char ToUpperChar() {
		return ToUpperChar(_Letter);
	}


	static char ToLowerChar(char c) {
		return IsUpper(c) ? c + 32 : c;
	}
	char ToLowerChar() {
		return ToLowerChar(_Letter);
	}

	static string Lower_First_Letter_Of_Each_Word(string Word) {
		string _LowerFirstLetter = "";
		short _Start = 0;
		short _End = 0;
		string Temp = "";
		short End_Of_Sentence = Size(Word);
		for (int i = 0; i < (Size(Word)); i++)
		{
			if (i == End_Of_Sentence || IsSpace(Word[i])) {
				_End = i;
				Temp = ExtractWordFromString(Word, _Start, _End - _Start);

				if (IsUpper(Temp[0])) {
					Temp[0] = ToLowerChar(Temp[0]);
					_LowerFirstLetter += Temp;
				}
				else {
					_LowerFirstLetter += Temp;
				}

				if (i < End_Of_Sentence) {
					_LowerFirstLetter += ' ';
					_Start = _End + 1;
				}
			}
		}
		return _LowerFirstLetter;
	}
	string Lower_First_Letter_Of_Each_Word() {
		return Lower_First_Letter_Of_Each_Word(_Value);
	}


	static string Upper_First_Letter_Of_Each_Word(string Word) {
		string _UpperFirstLetter = "";
		short _Start = 0;
		short _End = 0;
		string Temp = "";
		short End_Of_Sentence = Size(Word);
		for (int i = 0; i < (Size(Word)); i++)
		{
			if (i == End_Of_Sentence || IsSpace(Word[i])) {
				_End = i;
				Temp = ExtractWordFromString(Word, _Start, _End - _Start);

				if (IsLower(Temp[0])) {
					Temp[0] = ToUpperChar(Temp[0]);
					_UpperFirstLetter += Temp;
				}
				else {
					_UpperFirstLetter += Temp;
				}

				if (i < End_Of_Sentence) {
					_UpperFirstLetter += ' ';
					_Start = _End + 1;
				}
			}
		}
		return _UpperFirstLetter;
	}
	string Upper_First_Letter_Of_Each_Word() {
		return Upper_First_Letter_Of_Each_Word(_Value);
	}


	string ReplaceWord(string Sentence, string OldWord, string NewWord) {
		short _Start = 0;
		short _End = 0;
		string Temp = "";
		string _String_After_Replacing_Word = "";
		short End_Of_Sentence = Size(Sentence);

		for (int Current_Iteration = 0; Current_Iteration <= End_Of_Sentence; Current_Iteration++) {
			if (Current_Iteration == End_Of_Sentence || IsSpace(Sentence[Current_Iteration])) {
				_End = Current_Iteration;
				Temp = ExtractWordFromString(Sentence, _Start, _End - _Start);

				if (Temp == OldWord) {
					_String_After_Replacing_Word += NewWord;
				}
				else {
					_String_After_Replacing_Word += Temp;
				}

				if (Current_Iteration < End_Of_Sentence) {
					_String_After_Replacing_Word += ' ';
					_Start = _End + 1;
				}	
			}
		}
		return _String_After_Replacing_Word;
	}
	string ReplaceWord(string OldWord, string NewWord) {
		return ReplaceWord(_Value , OldWord, NewWord);
	}

	static string JoinString(string arrString[], short Length, string Delim)
	{
		string S1 = "";
		for (short i = 0; i < Length; i++)
		{
			S1 = S1 + arrString[i];
			if (i < Length - 1) {
				S1 += Delim;
			}
		}
		return S1;
	}
	static string JoinString(vector <string> List , string Delim) {
		string S1 = "";
		for (short i = 0; i < List.size(); i++)
		{
			S1 = S1 + List[i];
			if (i < (List.size() - 1)) {
				S1 += Delim;
			}
		}
		return S1;
	}

	static string ReverseString(string Sentence) {
		string _AfterReversing = "";
		int _SentenceLength = Size(Sentence);
		for (int i = _SentenceLength - 1; i >= 0; i--)
		{
			_AfterReversing += Sentence[i];
		}
		return _AfterReversing;
	}
	string ReverseString()
	{
		return ReverseString(_Value);
	}


	static string ReverseWordsInString(string Sentence) {
		int _SentenceLength = Size(Sentence);
		string AfterReversingWords = "";
		short _Start = 0;
		short _End = 0;
		string Temp = "";

		for (int i = 0; i <= _SentenceLength; i++)
		{
			if (i == _SentenceLength || IsSpace(Sentence[i])) {
				_End = i;
				Temp = ExtractWordFromString(Sentence, _Start, _End - _Start);

				for (int G = (Size(Temp) - 1); G >= 0; G--)
				{
					AfterReversingWords += Temp[G];
				}

				if (i < _SentenceLength)
				{
					AfterReversingWords += ' ';
					_Start = _End + 1;
				}
			}
		}
		return AfterReversingWords;
	}
	string ReverseWordsInString() {
		return ReverseWordsInString(_Value);
	}


	static bool IsVowel(char c) {
		bool Result = false;
			ToLowerChar(c);
			if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
			{
				Result = true;
			}
		return Result;
	}
	bool IsVowel() {
		return IsVowel(_Letter);
	}

	static short CountVowels(string S1)
	{
		short Counter = 0;

		for (short i = 0; i < Size(S1); i++)
		{
			if (IsVowel(S1[i]))
				Counter++;
		}

		return Counter;
	}
	short CountVowels()
	{
		return CountVowels(_Value);
	}
};

