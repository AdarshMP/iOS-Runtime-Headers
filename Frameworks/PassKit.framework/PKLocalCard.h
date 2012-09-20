/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSURL, NSString, <WLLocalCardFileAccessor>;

@interface PKLocalCard : PKPass <WLLocalCardFileAccessor, NSCopying> {
    NSURL *_fileURL;
    <WLLocalCardFileAccessor> *_fileAccessor;
    NSString *_localizedDescription;
    BOOL _removeOnDiskRepresentationOnDealloc;
}

@property(retain) NSURL * fileURL;
@property <WLLocalCardFileAccessor> * fileAccessor;
@property BOOL removeOnDiskRepresentationOnDealloc;

+ (BOOL)supportsSecureCoding;

- (void)setRemoveOnDiskRepresentationOnDealloc:(BOOL)arg1;
- (BOOL)removeOnDiskRepresentationOnDealloc;
- (void)_updateLocationsInCardDictionary:(id)arg1;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)diff:(id)arg1;
- (BOOL)moveToTemporaryURL;
- (id)serializedFileWrapper;
- (id)copyWithFileAccessor:(id)arg1;
- (id)copyWithFileURL:(id)arg1 fileAccessor:(id)arg2;
- (id)fileAccessor;
- (BOOL)removeCardAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)moveToFileURL:(id)arg1;
- (BOOL)moveCardAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)serializedFileWrapperAtURL:(id)arg1;
- (BOOL)copyCardAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)loadImageSet:(int)arg1 fromCardURL:(id)arg2 displayProfile:(id)arg3;
- (id)loadContentFromCardURL:(id)arg1;
- (BOOL)getCardAtURL:(id)arg1 resourceValue:(id*)arg2 forKey:(id)arg3 error:(id*)arg4;
- (id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2;
- (id)initWithFileURL:(id)arg1 fileAccessor:(id)arg2 error:(id*)arg3;
- (id)displayProfileWithCardDictionary:(id)arg1 cardURL:(id)arg2;
- (id)manifestHashAtURL:(id)arg1;
- (id)_locationsFromCardDictionary:(id)arg1;
- (id)localizedString:(id)arg1 forCardAtURL:(id)arg2;
- (id)loadDictionaryFromCardURL:(id)arg1;
- (id)validateCardURL:(id)arg1;
- (void)setFileAccessor:(id)arg1;
- (id)initWithBundleArchiveData:(id)arg1;
- (id)initWithBundleArchiveURL:(id)arg1;
- (void)fetchImageSet:(int)arg1 withCompletion:(id)arg2;
- (void)fetchContentWithCompletion:(id)arg1;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)localizedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (id)modificationDate;
- (id)initWithData:(id)arg1 error:(id*)arg2;

@end