#pragma once

#ifndef TIMER_H
#define TIMER_H

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

static inline void sys_sleep(unsigned int ms)
{
    #ifdef _WIN32
    Sleep(ms);
    #else
    usleep(ms * 1000);
    #endif
}

#endif
