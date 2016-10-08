/*

*/

#include "Source1_SdE.h"

#include <memory>
#include <basetsd.h>                    // 64bit INT
#include <iostream>                     // cout, cin
#include <time.h>                       // Laufzeitmessung
#include <cassert>                      // assert
#include <iterator>
#include "Kopf.h"

#define PRINT(X) cout << (#X) << "= " << (X) << endl; // Beschriftete Ausgabe

using namespace std;

int main(int argc, char *argv[]) {
   /* PRINT(index_von_zahl23(zahl_an_ind23(1000)));
    kappa();*/
    // Definitionen
    clock_t start_clock, n1_clock, n2_clock;        // ZEITMESSUNG
    string dateiname = "Sieb235Ergebnis.pri";
    const UINT64 num_bytes = 1 * (UINT64) pow(2, 20); // Bytes fuer Vektor
                                                    // feldgroesse enthaelt '0' als index.
    const UINT64 num_bits = num_bytes * 8;          // Plaetze fuer Kandidaten
    const UINT64 limit = zahl_an_ind23(num_bits - 1);
    constexpr char asprung[] = { 6, 4, 2, 4, 2, 4, 6, 2 };
    const UINT64 startzahl = erste_primzahl();
    assert(index_von_zahl23(limit) < num_bits);
    PRINT(index_von_zahl23(limit));
    PRINT(num_bits);
    const UINT64 SQRT_LIMIT = UINT64(sqrt(limit));  // Vordefinition unterer Test-Start
                                                    // Beginn Zeitmessung
    PRINT(limit);
    PRINT(SQRT_LIMIT*SQRT_LIMIT);

    auto arprime = make_unique<unsigned char[]>(num_bytes);
    cout << "Array erstellt." << endl;
    start_clock = clock();
    //arprime[0] = 123; arprime[1] = 124;
    //cout << arprime.get();

    cin.get();
    //arprime.reset(nullptr); cin.get();
    return 0;
}
