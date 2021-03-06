// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#import "MCQuadCoord.h"


@implementation MCQuadCoord

- (nonnull instancetype)initWithTopLeft:(nonnull MCCoord *)topLeft
                               topRight:(nonnull MCCoord *)topRight
                            bottomRight:(nonnull MCCoord *)bottomRight
                             bottomLeft:(nonnull MCCoord *)bottomLeft
{
    if (self = [super init]) {
        _topLeft = topLeft;
        _topRight = topRight;
        _bottomRight = bottomRight;
        _bottomLeft = bottomLeft;
    }
    return self;
}

+ (nonnull instancetype)quadCoordWithTopLeft:(nonnull MCCoord *)topLeft
                                    topRight:(nonnull MCCoord *)topRight
                                 bottomRight:(nonnull MCCoord *)bottomRight
                                  bottomLeft:(nonnull MCCoord *)bottomLeft
{
    return [(MCQuadCoord*)[self alloc] initWithTopLeft:topLeft
                                              topRight:topRight
                                           bottomRight:bottomRight
                                            bottomLeft:bottomLeft];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p topLeft:%@ topRight:%@ bottomRight:%@ bottomLeft:%@>", self.class, (void *)self, self.topLeft, self.topRight, self.bottomRight, self.bottomLeft];
}

@end
