#include <unistd.h>

/**
 * before - prints a message before main executes
 *
 * This function uses the constructor attribute to run automatically
 * before the main function is executed.
 */
__attribute__((constructor))
void before(void)
{
	char *s1 = "You're beat! and yet, you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";

	write(1, s1, 38);
	write(1, s2, 30);
}
