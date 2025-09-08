
    scanf("%s", str);
    for(int i=0; i<100; i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
        else if(str[i]=='\0')
        {
            break;
        }