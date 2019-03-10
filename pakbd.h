#ifndef PAKBD_H
#define PAKBD_H

#include "quantum.h"

#ifdef KEYBOARD_pakbd_rev1
    #include "rev1.h"
#elif KEYBOARD_pakbd_rev2
    #include "rev2.h"
#elif KEYBOARD_pakbd_rev3
    #include "rev3.h"
#endif

#endif
