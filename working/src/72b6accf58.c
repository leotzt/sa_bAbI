#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = 30;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_8[14];                                   // Tag.BODY
    if (entity_6 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 12;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 17; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_0;                                       // Tag.POINTER_DEC
    entity_0 = &entity_5;                                // Tag.POINTER_DEC
    char *entity_1 = (char *)(entity_0 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER