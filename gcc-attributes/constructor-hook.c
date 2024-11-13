#include <stdio.h>
#include <dlfcn.h>

typedef FILE *(*fopen_t)(const char * __filename,
		    const char * __modes);
fopen_t real_fopen;

// our fopen interceptor
FILE *fopen (const char *filename,
		    const char *modes) {

	fprintf(stdout, "our fopen called with args: (%s, %s)\n", filename, modes); 
	if (!real_fopen) {
		// fetch the real fopen function address
		real_fopen = dlsym(RTLD_NEXT, "fopen");
	}

	return real_fopen(filename, modes);
}

__attribute__((constructor)) static void setup(void) {
	fprintf(stdout, "called setup()\n");
}

