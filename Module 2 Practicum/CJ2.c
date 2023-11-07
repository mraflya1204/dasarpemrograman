//made by Muhammad Rafly Abdillah @Practicum 2

#include <stdio.h>
#include <string.h>

int main(){
    int T = 1;
    int x = 0;
    while(T!=0){
        scanf("%d", &T);
        char alooLang[101]; scanf("%s", alooLang);
        int j = 0;
        char mainLang[101] = "0";
        
        
        if(T==1){
            x = 0;
            for(int i = strlen(alooLang)-1; i>=0; i--){
                mainLang[j] = alooLang[i]; 
                j++;
            }
            if(strcmp(mainLang, alooLang)==0){
                x = 1;
            }
            printf("The Aloos said: %s\n", mainLang);
        }
        
        if(T==2){
            x = 0;
            for(int i = strlen(alooLang)-1; i>=0; i--){
                mainLang[j] = alooLang[i]; 
                j++;
            }
            if(strcmp(mainLang, alooLang)==0){
                x = 1;
            }
            
            if (x!=0){
                printf("Seems we have sometin in common\n");
            }
            else printf("Maybe we dont\n");
        }
    }
    
    printf("Lets show this to DJ\nJD ot siht wohs steL");
}