#include <stdio.h>  // Inkluderar standardbiblioteket för in- och utmatningsfunktioner

int main()
{
    printf("Hello, CMD!");  // Skriver ut texten "Hello, CMD!" till kommandoraden
    return 0; // Huvudprogrammet bör returnera ett heltal, vanligtvis 0 för att indikera att programmet avslutades framgångsrikt
}

// Huvudfunktion för ditt program
int main()
{
    // Deklarerar och initialiserar två heltalsvariabler
    int a = 1; // 00000000 00000000 00000000 00000001 
    int b = 11;

    // Adderar variablerna a och b och lagrar resultatet i c
    int c = a + b;

    // Skriver ut värdet av c till kommandoraden
    printf("c = %d\n", c); // c = 12, baserat på 4 bytes för en int

    // Deklarerar en array med fyra char-element (1 byte vardera)
    char bytes[4];

    // Initialiserar första elementet i bytes-arrayen till binärt värde 1
    bytes[0] = 0b00000001; // 00000001
    bytes[1] = 0;          // Initialiserar andra elementet till 0
    bytes[2] = 0;          // Initialiserar tredje elementet till 0
    bytes[3] = 0b00000000; // Initialiserar fjärde elementet till 0

    // Tilldelar variabeln c värdet av första elementet i bytes-arrayen
    c = bytes[0];

    // Deklarerar en pekare som pekar på tredje elementet i bytes-arrayen
    char *p1 = &bytes[2]; // p är en pointer, som pekar på den adress i minnet där bytes[2] ligger

    // Skriver ut värdet av c till kommandoraden
    printf("c = %d\n", c);

    // Skriver ut minnesadressen som p1 pekar på
    printf("p1 = %p\n", p1);
    // Skriver ut värdet som pekaren p1 pekar på
    printf("*p1 = %d\n", *p1);

    // Skriver ut minnesadressen som p1 pekar på (samma som ovan)
    printf("p1 = %p\n", p1);
    // Skriver ut värdet som pekaren p1 pekar på (samma som ovan)
    printf("*p1 = %d\n", *p1);

    // Deklarerar en pekare till en int och pekar på första elementet i bytes-arrayen
    int *p2 = (int *)&bytes[0]; // Type cast till int pekare
    printf("p2 = %p\n", p2);     // Skriver ut minnesadressen som p2 pekar på
    // Beräknar skillnaden mellan p2 och p1 och skriver ut den
    printf("p2 - p1 = %lld\n", (char *)p2 - p1); // Konverterar till char* för korrekt aritmetik

    // Skriver ut värdet som pekaren p2 pekar på (tolkat som en int)
    printf("*p2 = %d\n", *p2); // 00000000 00000000 00000000 00000001 (tolkat som en int)
    
    // Deklarerar två char-variabler med olika binära värden
    char signed_byte = 0b01111111; // Positivt signed byte
    unsigned char unsigned_byte = 0b11111111; // Högsta unsigned byte

    // Skriver ut värdet av signed_byte och unsigned_byte
    printf("signed byte   = %d\n", signed_byte);
    printf("unsigned byte = %u\n", unsigned_byte);

    return 0; // Huvudprogrammet avslutas framgångsrikt
}