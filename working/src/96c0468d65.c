#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_9;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_9 = 73;                           // Tag.BODY
    char entity_2[11];                       // Tag.BODY
    entity_8 = 34;                           // Tag.BODY
    if(entity_9 < entity_8){                 // Tag.BODY
    entity_9 = 52;                           // Tag.BODY
    } else {                                 // Tag.BODY
    entity_9 = 69;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_2[entity_9] = 'Q';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_5;                           // Tag.POINTER_DEC
    entity_5 = &entity_9;                    // Tag.POINTER_DEC
    int entity_1;                            // Tag.BODY
    char *entity_0 = (char *)(entity_5 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_1 = 56;                           // Tag.BODY
    char entity_4[93];                       // Tag.BODY
    entity_4[entity_1] = 'U';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER