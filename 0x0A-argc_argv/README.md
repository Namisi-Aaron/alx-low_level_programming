argc - argument count. The number of command line arguments
argv - argument variable. An array of strings containing the command line arguments. The array size of argv is argc
int main(int argc, char *argv[]) - Prototype for main function
To suppress unused parameters, use (void)var_name or __attribute__((unused)) eg. int __attribute__((unused)) myfunction(int parm1, long parm2) {...}
