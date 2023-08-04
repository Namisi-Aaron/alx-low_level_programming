argc - argument count
argv - argument variable
int main(int argc, char *argv[]) - Prototype for main function
To suppress unused parameters, use (void)var_name or __attribute__((unused)) eg. int __attribute__((unused)) myfunction(int parm1, long parm2) {...}
