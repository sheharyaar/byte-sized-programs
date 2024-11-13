#include <unistd.h>
#include <stdlib.h>

__attribute__((noreturn)) int exitnow() {
	// withoout noreturn attribute, the compiler should throw warning
	exit(1);
}

/* C11 introduced [[noreturn]] as an attribute */
[[noreturn]] void another_func() {
	exit(1);
}

int foo(int n)
{
        if ( n > 0 )
	{
                exitnow();
		/* control never reaches this point */
	}
        else {
		another_func();
	}
}

int main(int argc, char *argv[]) {
	foo(11);
}
