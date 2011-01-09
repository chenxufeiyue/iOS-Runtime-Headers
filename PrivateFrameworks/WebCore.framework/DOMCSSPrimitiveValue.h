/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMCSSPrimitiveValue : DOMCSSValue 
{
}

@property(readonly) unsigned short primitiveType;

+ (id)_wrapCSSPrimitiveValue:(struct CSSPrimitiveValue { int (**x1)(); NSInteger x2; NSInteger x3; union $_215 { NSInteger x_4_1_1; double x_4_1_2; struct StringImpl {} *x_4_1_3; struct Counter {} *x_4_1_4; struct Rect {} *x_4_1_5; NSUInteger x_4_1_6; struct Pair {} *x_4_1_7; struct DashboardRegion {} *x_4_1_8; } x4; }*)arg1;

- (unsigned short)primitiveType;
- (void)setFloatValue:(unsigned short)arg1 floatValue:(float)arg2;
- (float)getFloatValue:(unsigned short)arg1;
- (void)setStringValue:(unsigned short)arg1 stringValue:(id)arg2;
- (id)getStringValue;
- (id)getCounterValue;
- (id)getRectValue;
- (id)getRGBColorValue;
- (struct CSSPrimitiveValue { int (**x1)(); NSInteger x2; NSInteger x3; union $_215 { NSInteger x_4_1_1; double x_4_1_2; struct StringImpl {} *x_4_1_3; struct Counter {} *x_4_1_4; struct Rect {} *x_4_1_5; NSUInteger x_4_1_6; struct Pair {} *x_4_1_7; struct DashboardRegion {} *x_4_1_8; } x4; }*)_CSSPrimitiveValue;
- (void)setFloatValue:(unsigned short)arg1 :(float)arg2;
- (void)setStringValue:(unsigned short)arg1 :(id)arg2;

@end