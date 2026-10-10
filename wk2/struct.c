#include <stdio.h>
#include <stdlib.h>

struct timestamp {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

typedef struct timestamp t;

t add_timestamps(t t1, t t2){
    t t3;

    unsigned int new_sec = t1.second + t2.second;
    unsigned int new_min = t1.minute + t2.minute;
    unsigned int new_hour = t1.hour + t2.hour;

    if (new_sec >= 60){
        new_sec = new_sec % 60;
        new_min ++;
    }
    if (new_min >= 60){
        new_min = new_min % 60;
        new_hour++;
    }

    t3.second = new_sec; t3.minute = new_min; t3.hour = new_hour;

    return t3;
}

int main(int argc, char **argv) {
    if (argc == 7){
        t t1;
        t t2;

        t1.second = atoi(argv[3]); t1.minute = atoi(argv[2]); t1.hour = atoi(argv[1]);
        t2.second = atoi(argv[6]); t2.minute = atoi(argv[5]); t2.hour = atoi(argv[4]);

        t t3 = add_timestamps(t1, t2);

        printf("%d %d %d", t3.hour, t3.minute, t3.second);
    }
}