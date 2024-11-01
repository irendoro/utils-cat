#ifndef PART1_H
#define PART1_H

#include <getopt.h>
#include <stdlib.h>
#include <string.h>

typedef struct options
{
    int b;
    int e;
    int n;
    int s;
    int t;
    int v;
} opt;

void parser(int argc, char **argv, opt *options);
void print_opt(char *name, opt *options);
int check_file(int argc, char **argv, int optind);

#endif // PART1_H