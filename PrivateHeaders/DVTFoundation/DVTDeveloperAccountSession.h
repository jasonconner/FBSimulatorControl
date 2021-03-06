//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDeveloperAccount, NSData, NSString;

@interface DVTDeveloperAccountSession : NSObject
{
    id _identity;
    DVTDeveloperAccount *_account;
    NSString *_sessionID;
    NSString *_prsID;
    NSData *_sessionData;
}

@property(copy) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(copy) NSString *prsID; // @synthesize prsID=_prsID;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property struct OpaqueSecIdentityRef *identity;

@end

