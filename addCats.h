///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   10_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include "catDatabase.h"


extern int addCat(

        const char               name[],
        const int                gender,
        const int                breed,
        const bool               isFixed,
        const Weight             weight,
        const int                collar1,
        const int                collar2,
        const unsigned long long license

        );
