/*
Implementation by the Keccak, Keyak and Ketje Teams, namely, Guido Bertoni,
Joan Daemen, Michaël Peeters, Gilles Van Assche and Ronny Van Keer, hereby
denoted as "the implementer".

For more information, feedback or questions, please refer to our websites:
http://keccak.noekeon.org/
http://keyak.noekeon.org/
http://ketje.noekeon.org/

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/
*/

#ifndef _KeccakF800Reference_h_
#define _KeccakF800Reference_h_
#include "KeccakF-800-interface.h"

void displayRoundConstants(FILE *f);
void displayRhoOffsets(FILE *f);

#define KeccakF_Initialize                   KeccakF800_Initialize
#define KeccakF_StatePermute                KeccakF800_StatePermute

#endif
