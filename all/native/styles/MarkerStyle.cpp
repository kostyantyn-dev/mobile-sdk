#include "MarkerStyle.h"

namespace carto {

    MarkerStyle::MarkerStyle(const Color& color,
                             float attachAnchorPointX,
                             float attachAnchorPointY,
                             bool causesOverlap,
                             bool hideIfOverlapped,
                             float horizontalOffset,
                             float verticalOffset,
                             int placementPriority,
                             bool scaleWithDPI,
                             const std::shared_ptr<AnimationStyle>& animStyle,
                             float anchorPointX,
                             float anchorPointY,
                             const std::shared_ptr<Bitmap>& bitmap,
                             BillboardOrientation::BillboardOrientation orientationMode,
                             BillboardScaling::BillboardScaling scalingMode,
                             float clickSize,
                             float size) :
        BillboardStyle(color,
                       attachAnchorPointX,
                       attachAnchorPointY,
                       causesOverlap,
                       hideIfOverlapped,
                       horizontalOffset,
                       verticalOffset,
                       placementPriority,
                       scaleWithDPI,
                       animStyle),
        _anchorPointX(anchorPointX),
        _anchorPointY(anchorPointY),
        _bitmap(bitmap),
        _orientationMode(orientationMode),
        _scalingMode(scalingMode),
        _clickSize(clickSize),
        _size(size)
    {
    }
    
    MarkerStyle::~MarkerStyle() {
    }
    
    float MarkerStyle::getAnchorPointX() const {
        return _anchorPointX;
    }
    
    float MarkerStyle::getAnchorPointY() const {
        return _anchorPointY;
    }
    
    std::shared_ptr<Bitmap> MarkerStyle::getBitmap() const {
        return _bitmap;
    }
    
    BillboardOrientation::BillboardOrientation MarkerStyle::getOrientationMode() const {
        return _orientationMode;
    }
    
    BillboardScaling::BillboardScaling MarkerStyle::getScalingMode() const {
        return _scalingMode;
    }
    
    float MarkerStyle::getClickSize() const {
        return _clickSize;
    }
    
    float MarkerStyle::getSize() const {
        return _size;
    }
    
}
