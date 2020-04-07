/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;

Point<3> convertToXYZ(LUVAPixel pixel)
{
    return Point<3>(pixel.l, pixel.u, pixel.v);
}

MosaicCanvas *mapTiles(SourceImage const &theSource,
                       vector<TileImage> &theTiles)
{
    vector<Point<3>> graphical_tiles;
    map<Point<3>, int> dict;
    int count = 0;
    for (auto it : theTiles)
    {
        Point<3> next_pt(convertToXYZ(it.getAverageColor()));
        graphical_tiles.push_back(next_pt);
        dict[next_pt] = count;
        count++;
    }
    KDTree<3> image_tree(graphical_tiles);

    MosaicCanvas *canvas = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    for (int row = 0; row < theSource.getRows(); row++)
    {
        for (int col = 0; col < theSource.getColumns(); col++)
        {
            Point<3> query(convertToXYZ(theSource.getRegionColor(row, col)));
            canvas->setTile(row, col, &theTiles[dict[image_tree.findNearestNeighbor(query)]]);
        }
    }
    return canvas;
}