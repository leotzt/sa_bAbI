#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_9[44];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_6 = 27;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_8[9];                                    // Tag.BODY
    entity_3 = 95;                                       // Tag.BODY
    entity_8[entity_6] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_7[81];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_9[entity_3] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 21;                                       // Tag.BODY
    if (entity_4 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 26;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 62; entity_5 < entity_4; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'n';                            // Tag.BUFWRITE_COND_SAFE
    int *entity_1;                                       // Tag.POINTER_DEC
    entity_1 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_2 = (char *)(entity_1 + 2);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER