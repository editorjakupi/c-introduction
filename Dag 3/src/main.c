// Inkluderar standardbiblioteket för in- och utmatningsfunktioner
#include <stdio.h>
// Inkluderar standardbiblioteket för minneshanteringsfunktioner
#include <stdlib.h>
// Inkluderar en egen header-fil "main.h"
#include "main.h"

#if 1
// Funktion för att initialisera en spelare (Entity-typ)
void player_init(Entity *player, u32 hp, u32 attack, u32 defense) {
    // Skriver ut spelarens nuvarande hp (bör vara 50 enligt kommentarerna)
    printf("print 1 player hp is: %d\n", player->hp);
    // Tilldelar värdena till spelarens attribut
    player->attack = attack;
    player->hp = hp;
    player->defense = defense;
    // Skriver ut spelarens nya hp efter tilldelningen (bör vara 100 enligt kommentarerna)
    printf("print 2 player hp is: %d\n", player->hp);
}
#else
// Alternativ funktion för att initialisera en spelare (Player-typ)
void player_init(Player player, u32 hp, u32 attack, u32 defense) {
    // Skriver ut spelarens nuvarande hp (bör vara 50 enligt kommentarerna)
    printf("print 1 player hp is: %d\n", player.hp);
    // Tilldelar värdena till spelarens attribut
    player.hp = hp;
    player.attack = attack;
    player.defense = defense;
    // Skriver ut spelarens nya hp efter tilldelningen (bör vara 100 enligt kommentarerna)
    printf("print 2 player hp is: %d\n", player.hp);
}
#endif

// Funktion för att skriva ut byteantal
void print_byte_count(size_t size, u64 count, u64 padding) {
    //u64 just_to_take_space; // Kommenterad bort
    // Skriver ut det totala antalet bytes baserat på storlek, antal och padding
    printf("byte count: %lld\n", size * count + padding);
}

// Huvudprogrammet
int main() {
    //Entity player = {}; // Kommenterad bort, alternativt sätt att skapa en spelare
    //player.hp = 100;
    //player.attack = 10;
    //player.defense = 5;

    // en *p => &address  ram_minne[32GB], *p == ett index
    // u8 *p => &address i vårt minne, och om vi printf(*p) 1 byte stor
    // u32 *p => &address i vårt minne, och om vi printf(*p) 4 bytes stor
    // void *p => &address i vårt minne,

    // Allokerar 4 GB minne och nollställer det
    void *storage = calloc(gigabyte(4), 1);

    // Definierar antalet monster
    u64 monster_count = 1000000; 

    // Tolkar det allokerade minnet som en array av `Entity`-strukturer
    Entity *monsters = storage; 

    // Pekar på första elementet i monsters-arrayen
    Entity *monster = monsters;
    // Loopar genom arrayen och tilldelar varje monsters hp till 150
    for(void *end = &monsters[monster_count]; monster != end; ++monster) {
        monster->hp = 150;
    }

    // Alternativ loop för att tilldela varje monsters hp till 150
    for(int i = 0; i < monster_count; ++i) {
        monsters[i].hp = 150;
    }

    // Skriver ut storleken av `Entity`-strukturen
    printf("sizeof Entity: %lld bytes\n", sizeof(Entity)); // 12
    // Skriver ut storleken av `monsters`-arrayen
    printf("sizeof monsters: %lld bytes\n", sizeof(Entity) * monster_count); // 12 * monster_count
                                                               //
    // Skriver ut hp för ett specifikt monster
    printf("monster nr 980132's hp is: %d\n", monsters[980132].hp);

    // 1 200 012 bytes av data
    // gränsen just nu ligger mellan 120 012 och 1 200 012

    return 0; // Huvudprogrammet avslutas framgångsrikt
}
