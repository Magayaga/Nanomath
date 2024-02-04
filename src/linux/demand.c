#include "demand.h"
#include <stdlib.h>

DemandFunction createDemandFunction(int numPoints) {
    DemandFunction demand;
    demand.points = malloc(numPoints * sizeof(DemandPoint));
    demand.numPoints = 0;
    return demand;
}

void addDemandPoint(DemandFunction* demand, double price, double quantity) {
    if (demand->numPoints < sizeof(demand->points) / sizeof(DemandPoint)) {
        demand->points[demand->numPoints].price = price;
        demand->points[demand->numPoints].quantity = quantity;
        demand->numPoints++;
    }
}

double calculateElasticity(DemandFunction demand, int startIndex, int endIndex) {
    if (startIndex < 0 || endIndex >= demand.numPoints || startIndex >= endIndex) {
        // Invalid indices
        return 0.0;
    }

    double percentageChangeInQuantity = (demand.points[endIndex].quantity - demand.points[startIndex].quantity) /
                                         demand.points[startIndex].quantity;
    double percentageChangeInPrice = (demand.points[endIndex].price - demand.points[startIndex].price) /
                                      demand.points[startIndex].price;

    return percentageChangeInQuantity / percentageChangeInPrice;
}
