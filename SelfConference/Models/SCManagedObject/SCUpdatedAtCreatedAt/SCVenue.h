//
//  Venue.h
//  SelfConference
//
//  Created by Jeff Burt on 5/11/15.
//  Copyright (c) 2015 Self Conference. All rights reserved.
//

#import "SCUpdatedAtCreatedAt.h"

@interface SCVenue : SCUpdatedAtCreatedAt

@property (nonatomic) int32_t venueID;
@property (nonatomic, retain) NSString *about;
@property (nonatomic, retain) NSString *mapsUrlString;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSSet *events;
@property (nonatomic, retain) NSSet *rooms;

/**
 Fetches all 'SCVenue' entities from the API and returns them inside
 'completionBlock'
 */
+ (void)getVenuesWithCompletionBlock:(SCManagedObjectObjectsWithErrorBlock)completionBlock;

@end
