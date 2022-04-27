include "main.h"

/**
 * rot13 - encoding a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKk
		LlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWw
		XxYyZz";

	while (s[i] != '\0')
	{
		do {
			if (s[i] == string_alpha[j])
			{
				s[i] = string_rot13[j];
				break;
			}
			j++;
		} while (string_alpha[j] != '\0');
		j = 0;
		i++;
	}

	return (s);
}
