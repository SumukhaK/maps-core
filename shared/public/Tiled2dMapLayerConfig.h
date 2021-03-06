// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#pragma once

#include <cstdint>
#include <string>
#include <vector>

struct Tiled2dMapZoomInfo;
struct Tiled2dMapZoomLevelInfo;

class Tiled2dMapLayerConfig {
public:
    virtual ~Tiled2dMapLayerConfig() {}

    virtual std::string getCoordinateSystemIdentifier() = 0;

    virtual std::string getTileUrl(int32_t x, int32_t y, int32_t zoom) = 0;

    virtual std::string getTileIdentifier(int32_t x, int32_t y, int32_t zoom) = 0;

    virtual std::vector<Tiled2dMapZoomLevelInfo> getZoomLevelInfos() = 0;

    virtual Tiled2dMapZoomInfo getZoomInfo() = 0;
};
