/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    id _errorHandler;
    BOOL shouldContinue;
}

@property(copy) id errorHandler;

- (void)dealloc;
- (id)directoryAttributes;
- (id)errorHandler;
- (id)fileAttributes;
- (void)finalize;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 errorHandler:(id)arg4;
- (unsigned int)level;
- (id)nextObject;
- (void)setErrorHandler:(id)arg1;
- (void)skipDescendants;
- (void)skipDescendents;

@end