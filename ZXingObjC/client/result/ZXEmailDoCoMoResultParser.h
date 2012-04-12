#import "ZXAbstractDoCoMoResultParser.h"

/**
 * Implements the "MATMSG" email message entry format.
 * 
 * Supported keys: TO, SUB, BODY
 * 
 * @author Sean Owen
 */

@class ZXEmailAddressParsedResult, ZXResult;

@interface ZXEmailDoCoMoResultParser : ZXAbstractDoCoMoResultParser

+ (ZXEmailAddressParsedResult *) parse:(ZXResult *)result;
+ (BOOL) isBasicallyValidEmailAddress:(NSString *)email;

@end
