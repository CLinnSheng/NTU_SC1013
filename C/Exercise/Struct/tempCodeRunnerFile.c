    int cnt = 0;
    char *p, trash;

    for (int i = 0; i < MAX; i++){
        
        
        puts("Enter name:");
        scanf("%c", &trash);
        fgets(emp[i].name, 40, stdin);
        if (p = strchr(emp[i].name, '\n'))
            *p = '\0';

        if ( !strcmp("#", emp[i].name))
            return cnt;

        puts("Enter tel:");
        fgets(emp[i].telno, 40, stdin);
        if (p = strchr(emp[i].telno, '\n'))
            *p = '\0';        
        
        puts("Enter id:");
        scanf("%d", &emp[i].id);

        puts("Enter salary:");
        scanf("%lf", &emp[i].salary);

        cnt++;

    }