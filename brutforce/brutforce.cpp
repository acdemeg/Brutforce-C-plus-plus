// brutforce.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include "iostream"
#include "string"
#include "windows.h"
#include "ctime"

using namespace std;

char arr[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		       'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		       'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

char test_password_arr[] = { 'z' };
string password_test = "PUT";

unsigned long long iteration = 0;

string convertToString(char* arr, int size)
{
	int i;
	string s = "";
	for (i = 0; i < size; i++) {
		s = s + arr[i];
	}
	return s;
}

bool equalArr(char arr_test[], char arr_answer[], int sizeArr) {
	for (int i = 0; i < sizeArr; i++)
	{
		if (arr_answer[i] != arr_test[i]) {
			return false;
		}
	}
	return true;
}

bool oneSymbol(int sizeArr, int testSizeArr) {
	for (int a = 0; a < sizeArr; a++)
	{
		iteration++;

		char answer[] = { arr[a] };
		//int a_size = sizeof(arr) / sizeof(char);
		string s_answer = convertToString(answer, 1);

		if (password_test == s_answer)
		{
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "SUCCESS !!!" << endl;
			cout << "Password = " << s_answer << endl;
			return true;
		}
	}
	return false;
}

bool twoSymbols(int sizeArr, int testSizeArr) {
	for (int a = 0; a < sizeArr; a++)
	{
		for (int b = 0; b < sizeArr; b++)
		{
			iteration++;
			//Sleep(500);

			char answer[] = { arr[a], arr[b] };
			string s_answer = convertToString(answer, 2);

			if (password_test == s_answer)
			{
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "SUCCESS !!!" << endl;
				cout << "Password = " << s_answer << endl;
				return true;
			}
		}
	}
	return false;
}

bool threeSymbols(int sizeArr, int testSizeArr) {
	for (int a = 0; a < sizeArr; a++)
	{
		for (int b = 0; b < sizeArr; b++)
		{
			for (int c = 0; c < sizeArr; c++)
			{
				iteration++;
				
				char answer[] = { arr[a], arr[b], arr[c] };
				string s_answer = convertToString(answer, 3);

				if (password_test == s_answer)
				{
					cout << endl;
					cout << endl;
					cout << endl;
					cout << "SUCCESS !!!" << endl;
					cout << "Password = " << s_answer << endl;
					return true;
				}
			}
		}
	}
	return false;
}

bool fourSymbols(int sizeArr, int testSizeArr) {
	for (int a = 0; a < sizeArr; a++)
	{
		for (int b = 0; b < sizeArr; b++)
		{
			for (int c = 0; c < sizeArr; c++)
			{
				for (int d = 0; d < sizeArr; d++)
				{
					iteration++;
					//Sleep(500);
					
					char answer[] = { arr[a], arr[b], arr[c], arr[d] };
					string s_answer = convertToString(answer, 4);

					if (password_test == s_answer)
					{
						cout << endl;
						cout << endl;
						cout << endl;
						cout << "SUCCESS !!!" << endl;
						cout << "Password = " << s_answer << endl;
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool fiveSymbols(int sizeArr, int testSizeArr) {
	for (int a = 0; a < sizeArr; a++)
	{
		for (int b = 0; b < sizeArr; b++)
		{
			for (int c = 0; c < sizeArr; c++)
			{
				for (int d = 0; d < sizeArr; d++)
				{
					for (int e = 0; e < sizeArr; e++)
					{
						iteration++;

						char answer[] = { arr[a], arr[b], arr[c], arr[d], arr[e] };
						string s_answer = convertToString(answer, 5);

						if (password_test == s_answer)
						{
							cout << endl;
							cout << endl;
							cout << endl;
							cout << "SUCCESS !!!" << endl;
							cout << "Password = " << s_answer << endl;
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

bool sixSymbols(int sizeArr, int testSizeArr) {
	for (int a = 0; a < sizeArr; a++)
	{
		for (int b = 0; b < sizeArr; b++)
		{
			for (int c = 0; c < sizeArr; c++)
			{
				for (int d = 0; d < sizeArr; d++)
				{
					for (int e = 0; e < sizeArr; e++)
					{
						for (int f = 0; f < sizeArr; f++)
						{
							iteration++;
							
							char answer[] = { arr[a], arr[b], arr[c], arr[d], arr[e], arr[f] };
							string s_answer = convertToString(answer, 6);

							if (password_test == s_answer)
							{
								cout << endl;
								cout << endl;
								cout << endl;
								cout << "SUCCESS !!!" << endl;
								cout << "Password = " << s_answer << endl;
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "start..." << endl;
	cout << endl;

	int sizeArr = (sizeof(arr) / sizeof(*arr));
	int testSizeArr = (sizeof(test_password_arr) / sizeof(*test_password_arr));

	if (oneSymbol(sizeArr, testSizeArr)) {
		cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы 
		cout << "iteration = " << iteration / 1000000.0 <<" millions" << endl;
		system("pause");
		return 0;
	}
	else if (twoSymbols(sizeArr, testSizeArr)) {
		cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы
		cout << "iteration = " << iteration / 1000000.0 << " millions" << endl;
		system("pause");
		return 0;
	}
	else if (threeSymbols(sizeArr, testSizeArr)) {
		cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы
		cout << "iteration = " << iteration / 1000000.0 << " millions" << endl;
		system("pause");
		return 0;
	}
	else if (fourSymbols(sizeArr, testSizeArr)) {
		cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы
		cout << "iteration = " << iteration / 1000000.0 << " millions" << endl;
		system("pause");
		return 0;
	}
	else if (fiveSymbols(sizeArr, testSizeArr)) {
		cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы
		cout << "iteration = " << iteration / 1000000.0 << " millions" << endl;
		system("pause");
		return 0;
	}
	else if (sixSymbols(sizeArr, testSizeArr)) {
		cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы
		cout << "iteration = " << iteration / 1000000.0 << " millions" << endl;
		system("pause");
		return 0;
	}

	system("pause");
	return 0;
}


