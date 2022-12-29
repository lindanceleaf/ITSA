    #include <stdio.h>

    int main(){
        int month, date;
        scanf("%2d %2d", &month, &date);

        int temp = month * 100 + date;

        if(temp >= 121){
            if(temp <= 218) printf("Aquarius");
            else if(temp <= 320) printf("Pisces");
            else if(temp <= 420) printf("Aries");
            else if(temp <= 521) printf("Taurus");
            else if(temp <= 621) printf("Gemini");
            else if(temp <= 722) printf("Cancer");
            else if(temp <= 823) printf("Leo");
            else if(temp <= 923) printf("Virgo");
            else if(temp <= 1023) printf("Libra");
            else if(temp <= 1122) printf("Scorpio");
            else if(temp <= 1221) printf("Sagittarius");
            else printf("Capricorn");
        }
        else{
            printf("Capricorn");
        }
        printf("\n");
    }