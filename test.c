    int a = 3;
    int b = 5;
    int c = a + b;
    printf("A számok: %d %d %d \n", a, b, c);
    float f = 32.523f;
    printf("Az érték: %.3f \n", f);
/*    int egy;
    int ketto;
    scanf("%d %d", &egy, &ketto);
    int eredmeny = osszead(egy, ketto);
    printf("Összegük: %d \n ", eredmeny);
    valami();

    if(egy>0){
        printf("\nPozitív");
    }
    else if(egy<0){
        printf("\nNegatív");
    }
    else{
        printf("\nNulla");
    }

    if(0 < ketto && ketto < 10){
        printf("If you spell applesauce");
    } else if(ketto < 0){
        printf("You can call it");
    }
    else{
        printf("AAAAAAAAAAAAAAA");
    }
*/

    for (int i = 0; i < 11; ++i) {
        if(i < 1) printf("If you spell applesauce (%d)\n", i);
        else if (i < 2) printf("With just A (%d)\n", i);
        else if (i < 3) printf("You can call it (%d)\n", i);
        else if (i < 4) printf("............... (%d)\n", i);
        else printf("AAAAAAAAAAAAAAA (%d)\n", i);
    }

    int egy;
    printf("Kérek egy számot: ");
    scanf("%d", &egy);
    int test = egy % 24989;
    while (test != 0){
        printf("Help %d\n", test);
        egy += 1;
        test = egy%24989;
    }
