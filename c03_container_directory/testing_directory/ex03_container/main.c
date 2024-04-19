#include <stdio.h>
#include <string.h>

/*
geeksforgeeks.org/strncat-function-in-c-cpp

In C/C++, `strncat()` is a predefined function used for string handling.
**string.h** is the header file required for string functions. This
function appends not more than **n** characters from the string
pointed to by src to the end of the string pointed to by dest plus a
terminating Null-character. The initial character of the string(src)
overwrites the Null-character present at the end of a string(dest).
Thus, the length of the string(dest) becomes strlen(dest) + n. But,
if the length of the string(src) is less than **n**, only the
content up to the terminating null-character is copied and the length
of the string(dest) becomes strlen(src) + strlen(dest)
The behavior is undefined if -
- The strings overlap.
- The dest array is not large enough to append the contents of src.

Syntax:
```
char *strncat(char *dest, const char *src, size_t n)
```

**Parameters**: This method accepts the following parameters:
- **dest**: the string where we want to append.
- **src**: the string from which 'n' characters are going to append.
- **n**:  represents a maximum number of characters to be appended.
          size_t is an unsigned integral type.

**Return Value**: The `strncat()` function shall return the pointer to
                  the string(dest).

**Application**
Given two strings src and dest in C++, we need to append 'n' character
from src to dest, let's say n=5.

**Examples**:
Input:  src = "world"
        dest = "Hello "
Output: "Hello world"

Input:  src = "efghijkl"
        dest = "abcd"
Output: "abcdefghi"

Program:

```c

// C, C++ program demonstrate difference between
// strncat() and strcat()
#include <stdio.h>
#include <string.h>

int main()
{
    // Take any two strings
    char src[50] = "forgeeks";
    char dest1[50] = "geeks";
    char dest2[50] = "geeks";

    printf("Before strcat() function execution, ");
    printf("destination string : %s\n", dest1);

    // Appends the entire string of src to dest1
    strcat(dest1, src);

    // Prints the string
    printf("After strcat() function execution, ");
    printf("destination string : %s\n", dest1);

    printf("Before strncat() function function execution, ");
    pritnf("destination string : %s\n", dest2);

    // Appends characters from src to dest2
    strncat(dest2, src, 3);
 
    // Prints the string
    printf("After strncat() function execution, ");
    pinrtf("destination string : %s\n", dest2);

    return 0;
}

```

**Output**:
```
Source string : efghijkl
Destination string : abcdefghi
```

**How strncat() is different from strcat() ?**
It is recommended by many programmers that `strncat()` is safe as
compared to `strcat()` because `strcat()` does not check for the
size of the copied data, and copies until it gets to a null
terminator, it might cause a buffer overflow wihile `strncat()`
check for the size the copied data, and will copy only 'n' bytes.

```c

// C, C++ program demostrate difference between
// strncat() and strcat()
#include <stdio.h>
#include <string.h>

int main()
{
    // Take any two strings
    char str[50] = "forgeeks";
    char dest1[50] = "geeks";
    char dest2[50] = "geeks";

    printf("Before strcat() function execution, ");
    printf("destination string : %s\n", dest1);

    // Appends the entire string of src to dest1
    strcat(dest1, src);

    // Prints the string
    printf("After strcat() function execution, ");
    printf("destination string : %s\n", dest1);

    printf("Before strncat() function execution, ");
    printf("destination string : %s\n", dest2);

    // Appends 3 characters from src to dest2
    strncat(dest2, src, 3);

    // Prints the string
    printf("After strncat(0 function execution, ");
    printf("destination string : %s\n", dest2);

    return 0;
}
```

Output:
```
Before  strcat() function execution, destination string :
geeks
After strcat() function execution destination string :
geeksforgeeks
Before strncat() function execution, destination string :
geeks
After strncat() function execution, destination string :
geeksfor
```

Here's a complete roadmap for yout to becomde developer:
Learn DSA -> Master Frontend/Backend/Full Stack -> Build
Projects -> Keey Applying to Jobs

And why go anywhere else when our DSA to Development:
Coding Guide helps you do this in a single program! Apply now
to our DSA to Development Program and our counsellorw will
connect with you for further guidance & support.
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void) {
	char	str1[100] = "This is ";
	char	str2[100] = "programiz.com";
	printf("str2: \"%s\"\n", str2);
	printf("\n");
	//
	printf("str1: \"%s\"\n", str1);
	//
	strncat(str1, str2, 3);
	printf("after `strncat()`:\n");
	printf("str1: \"%s\"\n", str1);
	//
	printf("\n");
	//
	strcpy(str1, "This is ");
	printf("str1: \"%s\"\n", str1);
	//
	ft_strncat(str1, str2, 3);
	printf("after `ft_strncat()`:\n");
	printf("str1: \"%s\"\n", str1);
	//
	return (0);
}
