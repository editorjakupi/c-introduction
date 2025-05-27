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

// Definition av `SpecialMonster`-struktur som innehåller ett extra attack-attribut
typedef struct SpecialMonster {
    u32 hp;
    u32 attack;
    u32 extra_attack;
} SpecialMonster;

#endif // MAIN_H
