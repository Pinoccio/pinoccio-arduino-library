#ifndef LIB_PINOCCIO_BACKPACK_H_
#define LIB_PINOCCIO_BACKPACK_H_

#include <Pinoccio.h>

class PinoccioBackpack {

  public:
    PinoccioBackpack();
    ~PinoccioBackpack();

    void setup();
    void loop();

    void dumpBackpacks();

  protected:
    uint16_t family;
    uint32_t id;
};

typedef PinoccioBackpack Backpack;

#endif