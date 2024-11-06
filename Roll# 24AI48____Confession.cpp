#include <stdio.h>
#include <conio.h>
int main()
{
    int Reading_Time, Writing_Time, Total_Time;

    
    printf("Confessions pe kitna Time Reading karte ho (Minutes main) Likhoo:: ");
    scanf("%d", &Reading_Time);

    
    printf("Confessions pe kitna Time Writing pe lagate ho (Minutes main) Likhoo:: ");
    scanf("%d", &Writing_Time);

    
    Total_Time = Reading_Time + Writing_Time;

    
    if (Total_Time > 120)
	 
	   {
        printf("\n Oye! Aapne %d minutes confessions mein laga diye? Itna waqt barbaad! "
               "Socho agar yeh %d minutes parhai ya skill seekhne mein lagate, toh kidhar pohanch gaye "
               "hote! Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur "
               "apne goals par focus karo!\n", Total_Time, Total_Time);
       } 
	
	else if (Total_Time >= 60) 
	   {
        printf("Abey yar, aapne %d minutes confessions par lagaye, jo thoda zyada ho gaya na? "
               "Dekho, thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? "
               "Zindagi mein aise activities ka balance rakhna seekho, warna regret ho ga baad mein!\n", Total_Time);
       } 
	
	  else 
	   {
        printf("Wah bhai, kamal kar rahe ho! Sirf %d minutes mein confessions check kiye, "
               "aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge. "
               "Parhai aur apne goals pe dhyan rakho, shabash!\n", Total_Time);
       }
}