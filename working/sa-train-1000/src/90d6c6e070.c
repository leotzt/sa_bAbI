#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_2 = 52;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_1[50];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    if (entity_9 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 19;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 50; entity_6 < entity_9; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = 'H';                            // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                                       // Tag.POINTER_DEC
    entity_8 = &entity_6;                                // Tag.POINTER_DEC
    char *entity_7 = (char *)(entity_8 + 3);             // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER