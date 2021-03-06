/*
 * Copyright (c) 2016 CartoDB. All rights reserved.
 * Copying and using this code is allowed only according
 * to license terms, as given in https://cartodb.com/terms/
 */

#ifndef _CARTO_EPSG4326_H_
#define _CARTO_EPSG4326_H_

#include "projections/Projection.h"

namespace carto {

    /**
     * EPSG:4326 is a projection coordinate system that uses WGS84 coordinates (longitude/latitude).
     * Z-coordinate denotes height in meters.
     */
    class EPSG4326 : public Projection {
    public:
        EPSG4326();
        virtual ~EPSG4326();
        
        virtual MapPos fromInternal(const MapPos& mapPosInternal) const;
        virtual MapPos toInternal(const MapPos& mapPos) const;

        virtual MapPos fromWgs84(const MapPos& wgs84Pos) const;
        virtual MapPos toWgs84(const MapPos& mapPos) const;

        virtual std::string getName() const;

    private:
        enum { EARTH_RADIUS = 6378137 };
        
        static const double UNITS_TO_INTERNAL;
    };
    
}

#endif
