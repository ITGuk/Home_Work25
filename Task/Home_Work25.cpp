#include <iostream>

using namespace std;

int mystrlen(const char* str);//lens string
char* mystrcpy(char* str1, const char* str2);//copy string
char* mystrcat(char* str1, char* str2);//paste string
char* mystrchr(char* str, char s);//search char
char* mystrstr(char* str1, char* str2);//sears str in str

int main()
{
	char str[] = "This is a test message.";
	char strs[] = "message";
	char sa = 'g';

	bool check1 = true;
	int check2 = 0;

	while (true)
	{
		cout << "First string: " << str << endl <<
			"Second string: " << strs << endl;
		cout << endl << "Enter the function: " << endl <<
			"\t1 - Strcpy." << endl << "\t2 - Strcat." << endl <<
			"\t3 - Strchr." << endl << "\t4 - Strstr." << endl;
		cin >> check2;
		if (check2 == 1)
		{
			mystrcpy(str, strs);
			check2 = false;
		}
		if (check2 == 2)
		{
			mystrcat(str, strs);
			check2 = false;
		}
		if (check2 == 3)
		{
			mystrchr(str, sa);
			check2 = false;
		}
		if (check2 == 4)
		{
			mystrstr(str, strs);
			check2 = false;
		}
		break;
	}
}

int mystrlen(const char* str)
{
	int cont = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		cont++;
	}

	if (str[cont] == '\0')
	{
		 return cont++;
	}
}

char* mystrcpy(char* str1, const char* str2)
{
	bool check = true;
	int size = mystrlen(str1) + mystrlen(str2) - 1; 
	for (int i = 0; i < size; i++)
	{
		if (str2[i] == '\0')
		{
			check = false;
		}
		str1[i] = str2[i];
	}
	cout << str1 << endl;
	return 0;

}

char* mystrcat(char* str1, char* str2)
{
	int size = mystrlen(str1) + mystrlen(str2);
	int k = 0;
	bool check = true;
	char* new_str = new char[size];

	for (int i = 0; i <= size; i++)
	{
		if (str1[i] == '\0')
		{
			check = false;
		}
		if (check)
		{
			new_str[i] = str1[i];
		}
		else
		{
			new_str[i] = str2[k];
			k++;
		}
	}

	cout << new_str << endl;

	return new_str;
}

char* mystrchr(char* str, char s)
{
	for (int i = 0; i < mystrlen(str); i++)
	{
		if (str[i] == s)
		{
			char* a = &str[i];
			cout << a << endl;
			return a;

		}
	}
	return 0;
}

char* mystrstr(char* str1, char* str2)
{
	for (int i = 0; i < mystrlen(str1); i++)
	{
		if (str1[i] == str2[0])
		{
			for (int j = 0; j < mystrlen(str2) + 1; j++)
			{
				if (str1[i + j] != str2[j] && str2[j] == '\0')
				{
					char* result = &str1[i];
					cout << result << endl;
					return result;
				}
			}
		}
	}
	return 0;
}