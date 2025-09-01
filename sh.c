#include <stdio.h>
#include <stdlib.h>

#define PROC_NONE
#define PROC_COPY
#define PROC_PLAY
#define PROC_FIR
#define PROC_RING
#define PROC_PVOC
#define PROC_ANAL
#define PROC_SYNTH
#define PROC_DYNAMICS
#define PROC_GAIN
#define PROC_MUTATE
#define PROC_NORM
#define PROC_SRATE
#define PROC_EXTRACT

void do_the_thing(void); // void handle_null_event();

int main(void)
{
    while(true) {
        do_the_thing();
    }

    return 0;
}

void do_the_thing(char* process) {
    switch(process) {
        case PROC_NONE:
            break;
        case PROC_FIR:
            convolve_block();
            break;
    }
}