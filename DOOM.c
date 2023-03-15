#include <stdio.h>
#include <stdlib.h>
#include "botOP.h"
#include "Options.h"
#include "ScoreBoard.h"
#include "Show.h"
#include "shuffle_card.h"
#include "give.h"
#include "maximum.h"
#include "starter.h"
#include "sighn.h"
#include "Winer.h"
#include "zero.h"
int main()
{
    int card[44], cardSighn[4][12], start = 0, number = 5, score[2][2] = {0, 0}, masg = 6, DOOMcard = 5, winers[4][1], vorod = 1;
    int player1[4][14], player2bot[4][14], player3bot[4][14], player4bot[4][14];          /*make variubles*/
    zeroarr(cardSighn, player1, player2bot, player3bot, player4bot, winers);              /*make all arrays zero*/
    shuffle_card(card);                                                                   /*make random cards*/
    options(player1, player2bot, player3bot, player4bot, start, number, card, cardSighn); /*broadcast 5 card*/
    gameshow(score, masg, player1, player2bot, player3bot, player4bot, DOOMcard);         /*show first part of game*/
    DOOMcard = numberGiver(number, 0, player1);                                           /*catch doom card*/
    number = 4, start = 20;                                                               /*new values*/
    options(player1, player2bot, player3bot, player4bot, start, number, card, cardSighn); /*broadcast 4 card*/
    number = 2, start = 36, masg = 1;                                                     /*new values*/
    options(player1, player2bot, player3bot, player4bot, start, number, card, cardSighn); /*broadcast 2 card*/
    gameshow(score, masg, player1, player2bot, player3bot, player4bot, DOOMcard);         /*show all basic part of game */
    start = 1;                                                                            /*new values*/
    while (score[0][0] < 6 && score[0][1] < 6)                                            /*how many time should it play*/
    {
        printf("sc1--> %d | sc2--> %d \n", score);
        vorod = starter(start, DOOMcard, player1, player2bot, player3bot, player4bot, score);               /*give number of card of player*/
        start = WHOwin(number, vorod, DOOMcard, player1, player2bot, player3bot, player4bot, masg = 0);     /*clear who win the rouand*/
        vorod = scoreBO(start, winers, score, masg, player1, player2bot, player3bot, player4bot, DOOMcard); /*memorize the winers*/
    }
    gameshow(score, 4, player1, player2bot, player3bot, player4bot, DOOMcard);
}