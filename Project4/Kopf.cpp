/*

*/

#include "Source1_SdE.h"

#include <basetsd.h>                    // 64bit INT
#include <iostream>                     // cout, cin
#include <time.h>                       // Laufzeitmessung
#include <cassert>                      // assert

#define PRINT(X) cout << (#X) << "= " << (X) << endl; // Beschriftete Ausgabe

using namespace std;

int main(int argc, char *argv[]) {
   /* PRINT(index_von_zahl23(zahl_an_ind23(1000)));
    kappa();*/
    // Definitionen
    clock_t start_clock, n1_clock, n2_clock;        // ZEITMESSUNG
    string dateiname = "Sieb235Ergebnis.pri";
    const UINT64 num_bytes = 1 * (UINT64) pow(2, 20);        // Bytes fuer Vektor
                                                    // feldgroesse enthaelt '0' als index.
    const UINT64 feldgroesse = num_bytes * 8;       // Plaetze in Vektor
    const UINT64 limit = zahl_an_ind23(feldgroesse - 1);
    constexpr char asprung[] = { 6, 4, 2, 4, 2, 4, 6, 2 };
    assert(index_von_zahl23(limit) < feldgroesse);
    PRINT(index_von_zahl23(limit));
    PRINT(feldgroesse);
    const UINT64 SQRT_LIMIT = UINT64(sqrt(limit));  // Vordefinition unterer Test-Start
                                                    // Beginn Zeitmessung
    PRINT(limit);
    PRINT(SQRT_LIMIT*SQRT_LIMIT);
    start_clock = clock();

    cin.get();
    return 0;
}
