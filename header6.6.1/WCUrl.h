//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCUrl : NSObject <NSCoding>
{
    NSString *url;
    int type;
    NSString *md5;
    unsigned long long enckey;
    int encIdx;
    NSString *token;
    NSString *videomd5;
}

+ (id)UrlWithUrl:(id)arg1 type:(int)arg2;
@property(retain, nonatomic) NSString *videomd5; // @synthesize videomd5;
@property(nonatomic) unsigned long long enckey; // @synthesize enckey;
@property(nonatomic) int encIdx; // @synthesize encIdx;
@property(retain, nonatomic) NSString *token; // @synthesize token;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
