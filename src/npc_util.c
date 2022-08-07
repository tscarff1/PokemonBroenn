#include "global.h"
#include "script.h"
#include "npc_util.h"
#include "pokemon.h"

bool8 HasEnoughPokemonOfType(u8 count, u8 type)
{
    
    int i;
    int typeCount = 0;
    CalculatePlayerPartyCount();
    if(gPlayerPartyCount < count)
        return FALSE;
    
    for(i = 0; i < gPlayerPartyCount; i++) {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2, 0);
        u8 types[2]; 
        GetSpeciesTypes(types, species);
        if(types[0] == TYPE_GRASS || types[1] == TYPE_GRASS) {
            typeCount++;
        }
    }
    return typeCount >= count;
    return TRUE;
}