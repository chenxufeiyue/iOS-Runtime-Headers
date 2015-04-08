/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDAddressFilter, GEOPDAmenitiesFilter, GEOPDBoundsFilter, GEOPDBusinessClaimFilter, GEOPDETAFilter, GEOPDEntityFilter, GEOPDFlyoverFilter, GEOPDHoursFilter, GEOPDPhotoFilter, GEOPDPlaceInfoFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDReviewFilter, GEOPDRoadAccessInfoFilter, GEOPDStyleAttributesFilter;

@interface GEOPDComponentFilter : PBCodable <NSCopying> {
    GEOPDRoadAccessInfoFilter *_accessInfoFilter;
    GEOPDAddressFilter *_addressFilter;
    GEOPDAmenitiesFilter *_amenitiesFilter;
    GEOPDBoundsFilter *_boundsFilter;
    GEOPDBusinessClaimFilter *_businessClaimFilter;
    GEOPDEntityFilter *_entityFilter;
    GEOPDETAFilter *_etaFilter;
    GEOPDFlyoverFilter *_flyoverFilter;
    GEOPDHoursFilter *_hoursFilter;
    GEOPDPhotoFilter *_photoFilter;
    GEOPDPlaceInfoFilter *_placeInfoFilter;
    GEOPDRatingFilter *_ratingFilter;
    GEOPDRawAttributeFilter *_rawAttributeFilter;
    GEOPDReviewFilter *_reviewFilter;
    GEOPDStyleAttributesFilter *_styleAttributesFilter;
}

@property(retain) GEOPDRoadAccessInfoFilter * accessInfoFilter;
@property(retain) GEOPDAddressFilter * addressFilter;
@property(retain) GEOPDAmenitiesFilter * amenitiesFilter;
@property(retain) GEOPDBoundsFilter * boundsFilter;
@property(retain) GEOPDBusinessClaimFilter * businessClaimFilter;
@property(retain) GEOPDEntityFilter * entityFilter;
@property(retain) GEOPDETAFilter * etaFilter;
@property(retain) GEOPDFlyoverFilter * flyoverFilter;
@property(readonly) BOOL hasAccessInfoFilter;
@property(readonly) BOOL hasAddressFilter;
@property(readonly) BOOL hasAmenitiesFilter;
@property(readonly) BOOL hasBoundsFilter;
@property(readonly) BOOL hasBusinessClaimFilter;
@property(readonly) BOOL hasEntityFilter;
@property(readonly) BOOL hasEtaFilter;
@property(readonly) BOOL hasFlyoverFilter;
@property(readonly) BOOL hasHoursFilter;
@property(readonly) BOOL hasPhotoFilter;
@property(readonly) BOOL hasPlaceInfoFilter;
@property(readonly) BOOL hasRatingFilter;
@property(readonly) BOOL hasRawAttributeFilter;
@property(readonly) BOOL hasReviewFilter;
@property(readonly) BOOL hasStyleAttributesFilter;
@property(retain) GEOPDHoursFilter * hoursFilter;
@property(retain) GEOPDPhotoFilter * photoFilter;
@property(retain) GEOPDPlaceInfoFilter * placeInfoFilter;
@property(retain) GEOPDRatingFilter * ratingFilter;
@property(retain) GEOPDRawAttributeFilter * rawAttributeFilter;
@property(retain) GEOPDReviewFilter * reviewFilter;
@property(retain) GEOPDStyleAttributesFilter * styleAttributesFilter;

- (id)accessInfoFilter;
- (id)addressFilter;
- (id)amenitiesFilter;
- (id)boundsFilter;
- (id)businessClaimFilter;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityFilter;
- (id)etaFilter;
- (id)flyoverFilter;
- (BOOL)hasAccessInfoFilter;
- (BOOL)hasAddressFilter;
- (BOOL)hasAmenitiesFilter;
- (BOOL)hasBoundsFilter;
- (BOOL)hasBusinessClaimFilter;
- (BOOL)hasEntityFilter;
- (BOOL)hasEtaFilter;
- (BOOL)hasFlyoverFilter;
- (BOOL)hasHoursFilter;
- (BOOL)hasPhotoFilter;
- (BOOL)hasPlaceInfoFilter;
- (BOOL)hasRatingFilter;
- (BOOL)hasRawAttributeFilter;
- (BOOL)hasReviewFilter;
- (BOOL)hasStyleAttributesFilter;
- (unsigned int)hash;
- (id)hoursFilter;
- (id)initETAFilterWithTraits:(id)arg1;
- (id)initEntityFilterWithSpokenNames;
- (id)initPhotoFilterWithTraits:(id)arg1;
- (id)initReviewUserPhotoFilterWithTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoFilter;
- (id)placeInfoFilter;
- (id)ratingFilter;
- (id)rawAttributeFilter;
- (BOOL)readFrom:(id)arg1;
- (id)reviewFilter;
- (void)setAccessInfoFilter:(id)arg1;
- (void)setAddressFilter:(id)arg1;
- (void)setAmenitiesFilter:(id)arg1;
- (void)setBoundsFilter:(id)arg1;
- (void)setBusinessClaimFilter:(id)arg1;
- (void)setEntityFilter:(id)arg1;
- (void)setEtaFilter:(id)arg1;
- (void)setFlyoverFilter:(id)arg1;
- (void)setHoursFilter:(id)arg1;
- (void)setPhotoFilter:(id)arg1;
- (void)setPlaceInfoFilter:(id)arg1;
- (void)setRatingFilter:(id)arg1;
- (void)setRawAttributeFilter:(id)arg1;
- (void)setReviewFilter:(id)arg1;
- (void)setStyleAttributesFilter:(id)arg1;
- (id)styleAttributesFilter;
- (void)writeTo:(id)arg1;

@end