// Inkluderar standardbiblioteket för in- och utmatningsfunktioner
#include <stdio.h>
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

// Huvudprogram
int main() {
    // Skapar en `Entity`-instans för spelaren och initierar den med nollvärden
    Entity player = {};
    player.hp = 100;       // Tilldelar spelarens hp till 100
    player.attack = 10;    // Tilldelar spelarens attack till 10
    player.defense = 5;    // Tilldelar spelarens försvar till 5

    // Skapar en array av `Entity`-instanser för 100 monster och initierar dem med nollvärden
    Entity monsters[100] = {};

    // Pekar på första elementet i monsters-arrayen
    Entity *monster = monsters;
    // Loopar genom arrayen och tilldelar varje monsters hp till 150
    for (void *end = &monsters[100]; monster != end; ++monster) {
        monster->hp = 150;
    }

    // Alternativ loop för att tilldela varje monsters hp till 150
    for (int i = 0; i < 100; ++i) {
        monsters[i].hp = 150;
    }

    return 0; // Huvudprogrammet avslutas framgångsrikt
}
