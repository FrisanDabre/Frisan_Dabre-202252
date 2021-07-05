#include <stdio.h>

main() {
	FILE *fp:
	fp[D[D[A[C[C[C[C[C[C[C[C[;[B[D[D[D[D[D[D[D[D[D
[D[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C
[C
[A[D[C[C[C[C[C[C[C[C[C[C
	fp = fopen("/tmp/test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n",fp);
	fclose(fp);
}
^C
