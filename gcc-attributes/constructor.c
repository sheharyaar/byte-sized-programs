#include <stdio.h>

__attribute__((constructor)) int before_main() {
	fprintf(stdout, "executing func %s\n", __FUNCTION__);
	return 0;
}

__attribute__((destructor)) int after_main() {
	fprintf(stdout, "executing func %s\n", __FUNCTION__);
	return 0;
}

int main(int argc, char *argv[]) {
	fprintf(stdout, "executing func %s\n", __FUNCTION__);
	return 0;
}
