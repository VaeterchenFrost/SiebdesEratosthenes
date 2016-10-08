#pragma once

#include <basetsd.h>        //64 bit INT
#include <math.h>   //WURZEL
#include <basetsd.h>//64 bit INT
#include <iostream> //stream für cout, cin
#include <time.h>	//Laufzeitmessung
#include <fstream>  //Dateistreams
#include <string.h> //Stringbearbeitung


//FUNKTION: zahl 6k+-1 --> index im vector
inline UINT64 index_von_zahl23(UINT64 zahl) {
    /*Index aller fortlaufenden Zahlen ohne Vielfache von 2&3.
    Bei Eingabe von Zahlen mit !((z%2)*(z%3)) wuerden diese
    abgerundet auf die naechstmoegliche Zahl!
    0  1  2  3  4  5  6  7|
    1  5  7 11 13 17 19 23|
    */
    int rest = zahl % 6;
    UINT64 index = (rest == 5) + (zahl - rest) / 3;
    return index;
}

//FUNKTION: index im vector --> Zahl 6k+-1 
inline UINT64 zahl_an_ind23(UINT64 index) {
    /*Zu einer positiven Position im Vektor wird
    die dazugehoerige Zahl bei Start mit 1 zurueckgegeben.
    0  1  2  3  4  5  6  7|
    1  5  7 11 13 17 19 23|
    */
    UINT64 zahl = index * 3 + 1 + index % 2;
    return zahl;
}

void kappa();

UINT64 erste_primzahl();

int main(int argc, char * argv[]);
