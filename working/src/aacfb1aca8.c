#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_8;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    char entity_5[72];                       // Tag.BODY
    entity_8 = 24;                           // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_4 = 89;                           // Tag.BODY
    entity_2 = rand();                       // Tag.BODY
    if (entity_2 < entity_4){                // Tag.BODY
    } else {                                 // Tag.BODY
    entity_2 = 84;                           // Tag.BODY
    }                                        // Tag.BODY
    while(entity_8 < entity_2){              // Tag.BODY
    entity_8++;                              // Tag.BODY
    }                                        // Tag.BODY
    entity_5[entity_8] = 'G';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_8;                    // Tag.POINTER_DEC
    char *entity_3 = (char *)(entity_9 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER