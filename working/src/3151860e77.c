#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_4;                            // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    entity_4 = 2;                            // Tag.BODY
    char entity_1[94];                       // Tag.BODY
    if(entity_5 < entity_4){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 16;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_1[entity_5] = 'e';                // Tag.BUFWRITE_COND_SAFE
    int *entity_7;                           // Tag.POINTER_DEC
    entity_7 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_6 = (char *)(entity_7 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER