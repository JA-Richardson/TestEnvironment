#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_DEBUG_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 50.f, 10, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_DEBUG_SPHERE_ONEFRAME(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 50.f, 10, FColor::Red, false, -1.f, 0, 1.f);
#define DRAW_DEBUG_LINE(Start, End) if (GetWorld()) DrawDebugLine(GetWorld(), Start, End, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_DEBUG_LINE_ONEFRAME(Start, End) if (GetWorld()) DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.f, 0, 1.f);
#define DRAW_DEBUG_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 25.f, FColor::Red, true, -1.f, 0);
#define DRAW_DEBUG_POINT_ONEFRAME(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 25.f, FColor::Red, false, -1.f, 0);
#define DRAW_DEBUG_VECTOR(Start, End) if (GetWorld()) \
{ \
	DrawDebugPoint(GetWorld(), Start, 25.f, FColor::Red, true, -1.f, 0); \
	DrawDebugLine(GetWorld(), Start, End, FColor::Red, true, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), End, 25.f, FColor::Red, true, -1.f, 0); \
}

#define DRAW_DEBUG_VECTOR_ONEFRAME(Start, End) if (GetWorld()) \
{ \
	DrawDebugPoint(GetWorld(), Start, 25.f, FColor::Red, false, -1.f, 0); \
	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), End, 25.f, FColor::Red, false, -1.f, 0); \
}
