#include "part1.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    opt options = {0};
    parser(argc, argv, &options);
    if (check_file(argc, argv, optind) != 0)
    {
        for (int i = optind; i < argc; i++)
        {
            print_opt(argv[i], &options);
        }
    }
    return 0;
}

void parser(int argc, char **argv, opt *options)
{
    int opt;
    char *short_options = "benstvTE";
    static struct option long_options[] = {{"number-nonblank", 0, 0, 'b'},
                                           {"number", 0, 0, 'n'},
                                           {"squeeze-blank", 0, 0, 's'},
                                           {NULL, 0, NULL, 0}};
    while ((opt = getopt_long(argc, argv, short_options, long_options, NULL)) !=
           -1)
    {
        switch (opt)
        {
        case 'b':
            options->b = 1;
            break;
        case 'n':
            options->n = 1;
            break;
        case 'v':
            options->v = 1;
            break;
        case 's':
            options->s = 1;
            break;

        default:
            exit(1);
        }
        if (options->b)
        {
            options->n = 0;
        }
    }
}
