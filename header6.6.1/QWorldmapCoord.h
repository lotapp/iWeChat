//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QCoord-Protocol.h"

@class NSString;

@interface QWorldmapCoord : NSObject <QCoord>
{
}

+ (id)coord;
- (struct CLLocationCoordinate2D)clampCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)QMaxPoint;
- (struct CLLocationCoordinate2D)QCoordinateForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)QMapPointForCoordinate:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

