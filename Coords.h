#pragma once

struct Coords {
	int m_Xcoord;
	int m_Ycoord;

	bool operator > (Coords coord1, Coords coord2)
	{
		if (coord1.m_Xcoord > coords2.mX_coord) {
			return true;
		}
		else if (coord1.m_Xcoord == coords2.mX_coord) {
			if (coord1.m_Ycoord > coords2.mY_coord) {
				return true;
			}
		}
		return false;
	}
};