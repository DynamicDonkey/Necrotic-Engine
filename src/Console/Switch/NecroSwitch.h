#ifndef NECROSWITCH_H
#define NECROSWITCH_H

#include <SDL2/SDL.h>
#include <switch.h>
#include <unistd.h>

class NecroSwitch
{
public:
    static void switch_init()
    {
        romfsInit();
        chdir("romfs:/");
    }

};

#endif // NECROSWITCH_H
