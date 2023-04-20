    char Concated_string[21];
    for (int i = 0; i < strlen(a); i++)
    {
        Concated_string[i] = a[i];
    }
    for (int i = 0; i < 21; i++)
    {
        Concated_string[strlen(a)+i] = b[i];
    }
    printf("%s\n", Concated_string);