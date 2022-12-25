//Character - Handling Functions
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isdigit(int dig);
int isalpha(int alpha);
int isalnum(int alnum);
int isxdigit(int xdig);
int islower(int l);
int isupper(int u);
int isspace(int s);
int iscntrl(int c);
int ispunct(int p);
int isprint(int p);
int isgraph(int g);
int main()
{
	char ch;
	printf("Plz enter a character: ");
	scanf("%c", &ch);
	getchar();


	if (isdigit(ch))
	{
		printf("\n%c is a digit.", ch);
	}
	if (isalnum(ch))
	{
		printf("\n%c is a digit / alphabet determined by function (isalnum)", ch);
	}
	if (isxdigit(ch))
	{
		printf("\n%c is a hexadecimal gigit.", ch);
	}

	int check1, check2;
	if (isalpha(ch))
	{
		printf("\n%c is a aplhabet.", ch);
		if (islower(ch))
		{
			printf("\n%c is a lower case character.", ch);
		}
		if (isupper(ch))
		{
			printf("\n%c is a upper Case character.", ch);	
		}
	}

	if (isspace(ch))
	{
		printf("\n%c is a white space character ", ch);
	}
	if (iscntrl(ch))
	{
		printf("\n%c is a control charcter.", ch);
	}
	if (ispunct(ch))
	{
		printf("\n%c is a printing character other than space, digit, or letter", ch);
	}
	if (isprint(ch))
	{
		printf("\n%c is a printing character including space", ch);
	}
	if (isgraph(ch))
	{
		printf("\n%c is a printing character other than space.", ch);
	}

	return 0;
}
int isdigit(int dig)    //Determines whether an argument is a digit(0-9)
{
	if (dig >= '0' && dig <= '9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isalpha(int alpha)    //Determines whether an argument is alphabet(upper/lower)
{
	if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isalnum(int alnum) //Determines whether an argument is alphabet(upper/lower) or digit(0-90
{
	if ((alnum >= 'a' && alnum <= 'z') || (alnum >= 'A' && alnum <= 'Z') || (alnum >= '0' && alnum <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isxdigit(int xdig)   //Determines whether an argument is hexadecimal digit(A-F, a-f, 0-9)
{
	if ((xdig >= 'A' && xdig <= 'F') || (xdig >= 'a' && xdig <= 'f') || (xdig >= '0' && xdig <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int islower(int l) //Determines whether an argument is lowercase
{
	if (l >= 'a' && l <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isupper(int u)     //Determines whether an argument is uppercase
{
	if (u >= 'A' && u <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isspace(int s)
{
	if (s == ' ' || s == 'f' || s == '\n' || s == '\r' || s == '\t' || s == '\v')
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int iscntrl(int c)
{
	if (c == 't' || c == '\v' || c == '\f' || c == '\a' || c == '\b' || c == '\r' || c == '\n')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int ispunct(int p)
{
	if (p == '$' || p == '#' || p == '(' || p == ')' || p == '[' || p == ']' || p == '{' || p == '}' || p == ';' || p == ':' || p == '%')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isprint(int p)
{
	if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z') || (p >= '0' && p <= '9') || (p == ' ' || p == '$' || p == '#' || p == '(' || p == ')' || p == '[' || p == ']' || p == '{' || p == '}' || p == ';' || p == ':' || p == '%'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isgraph(int g)
{
	if ((g >= 'a' && g <= 'z') || (g >= 'A' && g <= 'Z') || (g >= '0' && g <= '9') || (g == '$' || g == '#' || g == '(' || g == ')' || g == '[' || g == ']' || g == '{' || g == '}' || g == ';' || g == ':' || g == '%'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
