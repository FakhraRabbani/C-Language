//Taking input in student ID and determining whether he/she is a legal student or not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 5
#define LEN 40
int length(const char* id);
int compare(const char* l, const char* id);
int main()
{
	char ID[LEN]; 
	char list[MAX][LEN] = { "BITF21M501", "BITF21M502", "BITF21M503", "BITF21M504", "BITF21M505" };
	printf("Plz enter the student ID you want to check: ");
	scanf("%s", &ID);

	int flag = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (compare(*(list + i), ID))
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%s is a legal student.", ID);
	}
	else
	{
		printf("%s is not a legal student.", ID);
	}

	return 0;
}
int length(const char* len)
{
	int i = 0;
	while(*len != '\0')
	{
		i++;
		len++;
	}
	return i;
}
int compare(const char* l, const char* id)
{
	int l1 = length(l);
	int id1 = length(id);
	if (l1 < id1)
	{
		return 0;
	}
	else if (id1 < l1)
	{
		return 0;
	}
	else
	{
		int flag = 1;
		for (int i = 0; i < l1; i++)
		{
			if (*l != *id)
			{
				flag = 0;
				break;
			}
			id++;
			l++;
		}
		if (flag == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
