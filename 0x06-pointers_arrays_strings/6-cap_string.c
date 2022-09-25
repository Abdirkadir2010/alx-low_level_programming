#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalize string
 * @str: string need to be capitalized
 * 
 * Return: Return the string
 */
char *cap_string(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 97 && str[j] <= 122)
		{
			if (j == 0)
			{
				str[j] -= 32;
			}
			if (str[j - 1] == ' ' ||
		 	    str[j - 1] == '\t' || 
		   	    str[j - 1] == '\n' || 
		   	    str[j - 1] == ',' || 
		   	    str[j - 1] == ';' || 
		    	    str[j - 1] == '.' || 
		    	    str[j - 1] == '!' || 
		    	    str[j - 1] == '?' || 
		    	    str[j - 1] == '"' || 
		    	    str[j - 1] == '(' || 
		      	    str[j - 1] == ')' || 
		    	    str[j - 1] == '{' || 
		    	    str[j - 1] == '}')
				str[j] -= 32;
		}
		j++;
	}
	return (str);
}
