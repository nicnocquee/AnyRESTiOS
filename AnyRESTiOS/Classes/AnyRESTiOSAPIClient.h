#import "AFHTTPClient.h"

@interface AnyRESTiOSAPIClient : AFHTTPClient

+ (AnyRESTiOSAPIClient *)sharedClient;

@end
