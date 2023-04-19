Charater Set/ASCII Code

	Character set are set of character which are suported by any programming language such as C, C++ etc.
	In system some numeric set of codes are defined for each character and almost all machines supports these numeric code.

	For English : ASCII
	for other languages we have UNI Codes

	e.g : A -> 65 ... Z -> 90
		  a -> 97 ... z-> 122
		  0 -> 48 ... 9 -> 57

		  _| (enter)-> 10

		  In ASCII we have 0 - 127 codes -> total 128 only 7 bit is required.


		  Unicodes are universal so ASCII is subset of unicode : unicode take 2 bytes : 16 bits

		  Unicodes are stored as hexadecimal.


Representaion in C
	char temp; // Its size is 1 byte char data type is used to store ASCII code of char
	temp = 'A'

	// In memory numeric code associate to that char is stored
	printf("%d", temp) // this will display 65
	printf("%c", temp) // this will display character A

Charater Array

	char x[5];
	char x[5] = {'A', 'B', 'C', 'D', 'E'};
	char x[5] = {65, 66, 67, 68, 69, 70};

	char x[5] = {'A', 'B'}; // first 2 inde will be initilized as A, B and rest will be filled with 0

	char name[10] = {'H', 'O', 'O', 'D', 'A'}; // In memory rest of index will be initilized with 0
	so to mark the end of string a special charater is used which is represented as '\0' -> string delimeter, end of string character, null charater, string terminator.

	In other Languages such as Java end of string is known based on its length.

	So creating string in C
		char name[10] = {'H', 'O', 'O', 'D', 'A', '\0'};
		char name[] = {'H', 'O', 'O', 'D', 'A', '\0'};
		char name[] = "HOODA";
		printf("%s", name); 
		scanf("%s", name); // this is good for single word
		gets(name); // This will read string including spaces untill Enter is pressed.

