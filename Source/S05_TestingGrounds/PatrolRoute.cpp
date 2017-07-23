// Fill out your copyright notice in the Description page of Project Settings.

#include "PatrolRoute.h"

/**
 * A "route card" to help AI choose their next waypoint.
 */

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
    return PatrolPoints;
}
