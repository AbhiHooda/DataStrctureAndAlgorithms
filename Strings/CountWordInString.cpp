#include <iostream>
using namespace std;

int main()
{
	char s[1000] = "  How   are   you    ";
	int words = 0;
	int i = 0;
	while(s[i] != '\0')
	{
		bool isWord = false;
		while (s[i] == ' ')
		{
			i++;
		}
		
		while(s[i] != '\0' && s[i] != ' ')
		{
			isWord = true;
			i++;
		}
		if (isWord)
			words++;
	}

	// for(i = 0; s[i] != '\0'; i++)
	// {
	//  if i = 0 needs to be checked seperately
	// 	if(s[i] == ' ' && s[i - 1] != ' ')
	// 	{
	// 		words++;
	// 	}
	// }

	printf("%s cantains %d words", s, words);
}