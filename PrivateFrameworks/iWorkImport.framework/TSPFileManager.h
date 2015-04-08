/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFileManager : NSObject {
}

+ (BOOL)copyReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 error:(id*)arg6;
+ (void)copyReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(id)arg7;
+ (void)copyReadChannel:(id)arg1 decryptionInfo:(id)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 completion:(id)arg5;
+ (void)copyReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 synchronous:(BOOL)arg4 completion:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 sourcePath:(id)arg3 targetPath:(id)arg4;
+ (id)ioQueue;
+ (BOOL)linkFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
+ (BOOL)linkFileAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (BOOL)linkOrCopyURL:(id)arg1 decryptionInfo:(id)arg2 toURL:(id)arg3 encryptionInfo:(id)arg4 error:(id*)arg5;
+ (BOOL)linkOrCopyURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (void)transcodeReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(BOOL)arg6 completion:(id)arg7;

@end