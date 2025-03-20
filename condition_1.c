//-----------------//
//   Patro Dekha   //
//-----------------//
//condition 1 -> patro er height 6F
//condition 2 -> football jante hobe (football = 1 , cricket =2)
//condition 3 -> Real Madrid er fan hote hobe (RMA = 1, others = 2)
//condition 4 -> sorkari chakri (govt = 1, non-govt = 2)
//condition 5 -> fuckar bebsa thakle bakigula na thakleo cholbe (fuckwala = 1, others = 2)

#include <stdio.h>
int main(){
    int height, favSports, clubFan, jobType, business;
    scanf("%d %d %d %d %d", &height, &favSports, &clubFan, &jobType, &business);

    // printf("%d %d %d %d %d", height, favSports, clubFan, jobType, business);

    // printf("patro er height: %dF\n", height);

    // if(favSports == 1){
    //     printf("football jaane\n");
    // }
    // else{
    //     printf("football jaane na\n");
    // }

    // if(clubFan == 1){
    //     printf("real madrid support kore\n");
    // }
    // else{
    //     printf("real madrid support kore na\n");
    // }

    // if(jobType == 1){
    //     printf("polay sorkari chakri kore\n");
    // }
    // else{
    //     printf("polay sorkari chakri kore na\n");
    // }

    // if(business == 1){
    //     printf("polar bebsa ache\n");
    // }
    // else{
    //     printf("polar bebsa nai\n");
    // }

    if((height == 6 && favSports == 1 && clubFan == 1 && jobType == 1) || (business == 1)){
        printf("Patro paiya geci\n");
    }
    else{
        printf("dhur beta! noya patro dekha lagbo\n");
    }

    return 0;
}