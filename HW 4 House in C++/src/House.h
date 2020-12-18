//
// Created by Jon on 12/6/2020.
//

#ifndef INC_2020HW4STARTER_HOUSE_H
#define INC_2020HW4STARTER_HOUSE_H


#include "Layout.h"

typedef struct{
    int nLayouts;
    Layout *layouts;
    int **layoutGraph;
} House;

Layout* accessibleLayouts(House house, Layout *layouts);

int numAccessibleLayouts(House house);

void searchInLayouts(Layout layout, Search *search);


#endif //INC_2020HW4STARTER_HOUSE_H
