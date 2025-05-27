#ifndef MAIN_H
#define MAIN_H

#include <stdint.h> // Inkluderar biblioteket som hanterar fasta breddstyper (t.ex. int8_t, int16_t)

// Typdefinitioner för olika signed taltyper
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

// Typdefinitioner för olika unsigned taltyper
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// Definition av `Entity`-struktur
typedef struct Entity {
    u32 hp;
    u32 attack;
    u32 defense;
} Entity;

// Makron för att omvandla mängder till olika storleksenheter
#define kilobyte(amount) (amount * 1024LL)
#define megabyte(amount) (kilobyte(amount) * 1024LL)
#define gigabyte(amount) (megabyte(amount) * 1024LL)
#define terabyte(amount) (gigabyte(amount) * 1024LL)
#define petabyte(amount) (terabyte(amount) * 1024LL)

#endif // MAIN_H
