#include <stdio.h>
#include <stdlib.h>

struct record
{
    char drug_name[64];
    char indications[64];
    int exp_years;
    int mfg_year;
};

#define n 3
struct record row[n];

int main()
{
    FILE *fileb;
    fileb = fopen("extask16.raw", "wb");

    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d",
                row[i].drug_name, row[i].indications,
                &row[i].exp_years, &row[i].mfg_year);
    }

    printf("\n");

    printf("name\tindics\texp\tyear\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\n",
                row[i].drug_name, row[i].indications,
                row[i].exp_years, row[i].mfg_year);
    }

    //fwrite(fileb, "name\tindics\texp\tyear\n");
    for(int i = 0; i < n; i++)
    {
    fwrite(&row, sizeof(row), 1, fileb);
    }

    fclose(fileb);

    return 0;
}