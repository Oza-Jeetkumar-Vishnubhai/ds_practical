/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "fibonacci.h"


void fib_prog_1(char *host, int x)
{
	CLIENT *clnt;
	sequence *result_1;
	int fib_1_arg;

#ifndef DEBUG
	clnt = clnt_create(host, FIB_PROG, FIB_VERS, "udp");
	if (clnt == NULL)
	{
		clnt_pcreateerror(host);
		exit(1);
	}
#endif /* DEBUG */
	fib_1_arg = x;
	result_1 = fib_1(&fib_1_arg, clnt);
	if (result_1 == (sequence *)NULL)
	{
		clnt_perror(clnt, "call failed");
	}
	else
	{
		printf("Fib series upto %d: ", fib_1_arg);
		int i = 0;
		while (1)
		{
			if (result_1->a[i] < fib_1_arg)
				printf("%d ", result_1->a[i++]);
			else
				break;
		}
		printf("\n");
	}
#ifndef DEBUG
	clnt_destroy(clnt);
#endif /* DEBUG */
}

int main(int argc, char *argv[])
{
	char *host;

	if (argc < 3)
	{
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	fib_prog_1(host, atoi(argv[2]));
	exit(0);
}
