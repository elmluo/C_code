#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int go_return(void);

int main(int argc, char const *argv[])
{
	go_return();
}

/**
 * goto demo
 */
int go_return() {
	int retn = 0;
	if (false) {
		printf("%s\n", "FALSE");
		return retn;
	} else {
		printf("%s\n", "TRUE");
		retn = 1;
		goto END;
	}
END:
	return retn;
}
