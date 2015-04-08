/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSData, NSString;

@interface PKPaymentRequest : NSObject <NSSecureCoding> {
    NSData *_applicationData;
    void *_billingAddress;
    NSString *_countryCode;
    NSString *_currencyCode;
    unsigned int _merchantCapabilities;
    NSString *_merchantIdentifier;
    NSArray *_paymentSummaryItems;
    unsigned int _requiredBillingAddressFields;
    unsigned int _requiredShippingAddressFields;
    void *_shippingAddress;
    BOOL _shippingEditable;
    NSString *_shippingEditableMessage;
    NSArray *_shippingMethods;
    unsigned int _shippingType;
    NSArray *_supportedNetworks;
}

@property(copy) NSData * applicationData;
@property void* billingAddress;
@property(copy) NSString * countryCode;
@property(copy) NSString * currencyCode;
@property unsigned int merchantCapabilities;
@property(copy) NSString * merchantIdentifier;
@property(copy) NSArray * paymentSummaryItems;
@property unsigned int requiredBillingAddressFields;
@property unsigned int requiredShippingAddressFields;
@property void* shippingAddress;
@property(getter=isShippingEditable) BOOL shippingEditable;
@property(copy) NSString * shippingEditableMessage;
@property(copy) NSArray * shippingMethods;
@property unsigned int shippingType;
@property(copy) NSArray * supportedNetworks;

+ (BOOL)supportsSecureCoding;

- (id)_shippingTypeToString;
- (id)_transactionAmount;
- (id)applicationData;
- (void*)billingAddress;
- (id)countryCode;
- (id)currencyCode;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isShippingEditable;
- (unsigned int)merchantCapabilities;
- (id)merchantIdentifier;
- (id)paymentSummaryItems;
- (unsigned int)requiredBillingAddressFields;
- (unsigned int)requiredShippingAddressFields;
- (void)setApplicationData:(id)arg1;
- (void)setBillingAddress:(void*)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setRequiredBillingAddressFields:(unsigned int)arg1;
- (void)setRequiredShippingAddressFields:(unsigned int)arg1;
- (void)setShippingAddress:(void*)arg1;
- (void)setShippingEditable:(BOOL)arg1;
- (void)setShippingEditableMessage:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setShippingType:(unsigned int)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void*)shippingAddress;
- (id)shippingEditableMessage;
- (id)shippingMethods;
- (unsigned int)shippingType;
- (id)supportedNetworks;

@end