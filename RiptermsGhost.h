// RiptermsGhost.h
#ifndef RIPTERMSGHOST_H
#define RIPTERMSGHOST_H

#include <Windows.h>
#include <iostream>
#include <string>

class RiptermsGhost {
public:
    RiptermsGhost();
    ~RiptermsGhost();

    void init();
    void inject();
    void unload();

private:
    HMODULE hModule;
};

#endif // RIPTERMSGHOST_H
