#ifndef DEMAND_H
#define DEMAND_H

typedef struct {
    double price;
    double quantity;
} DemandPoint;

typedef struct {
    DemandPoint* points;
    int numPoints;
} DemandFunction;

DemandFunction createDemandFunction(int numPoints);

void addDemandPoint(DemandFunction* demand, double price, double quantity);

double calculateElasticity(DemandFunction demand, int startIndex, int endIndex);

#endif  // DEMAND_H
