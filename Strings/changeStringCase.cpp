#include <iostream>
using namespace std;

int main()
{
	char s[1000] = "wElCoMe";
	int i = 0;
	for(; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 90)
		{
			s[i] += 32;
		}
		else if (s[i] >= 97 && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	printf("%s", s);
}