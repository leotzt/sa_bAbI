#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_3;                            // Tag.BODY
    int entity_4;                            // Tag.BODY
    entity_3 = 14;                           // Tag.BODY
    char entity_6[28];                       // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    if(entity_4 < entity_3){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 11;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_6[entity_4] = 'D';                // Tag.BUFWRITE_COND_SAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_4;                    // Tag.POINTER_DEC
    char *entity_9 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER