//
//  ADNClient+ADNFile.h
//  ADNKit
//
//  Created by Joel Levin on 3/5/13.
//  Copyright (c) 2013 Afterwork Studios. All rights reserved.
//

#import "ANKClient+ANKHandlerBlocks.h"


@class ANKFile;

@interface ANKClient (ANKFile)

- (void)fetchFileWithID:(NSString *)fileID completion:(ADNClientCompletionBlock)completionHandler;
- (void)fetchFilesWithIDs:(NSArray *)fileIDs completion:(ADNClientCompletionBlock)completionHandler;
- (void)fetchCurrentUserFilesWithCompletion:(ADNClientCompletionBlock)completionHandler;
- (void)fetchContentsOfFile:(ANKFile *)file completion:(ADNClientCompletionBlock)completionHandler;
- (void)fetchContentsOfFileWithID:(NSString *)fileID completion:(ADNClientCompletionBlock)completionHandler;

- (void)createFile:(ANKFile *)file withData:(NSData *)fileData completion:(ADNClientCompletionBlock)completionHandler;
- (void)createFileWithData:(NSData *)fileData mimeType:(NSString *)mimeType filename:(NSString *)filename metadata:(NSDictionary *)metadata completion:(ADNClientCompletionBlock)completionHandler;
- (void)createFileWithContentsOfURL:(NSURL *)fileURL metadata:(NSDictionary *)metadata completion:(ADNClientCompletionBlock)completionHandler;

- (void)updateFile:(ANKFile *)file completion:(ADNClientCompletionBlock)completionHandler;
- (void)updateFileWithID:(NSString *)fileID name:(NSString *)updatedName isPublic:(BOOL)updatedPublicFlag completion:(ADNClientCompletionBlock)completionHandler;

- (void)deleteFile:(ANKFile *)file completion:(ADNClientCompletionBlock)completionHandler;
- (void)deleteFileWithID:(NSString *)fileID completion:(ADNClientCompletionBlock)completionHandler;

- (void)setContentOfFile:(ANKFile *)file fileData:(NSData *)fileData mimeType:(NSString *)mimeType completion:(ADNClientCompletionBlock)completionHandler;
- (void)setContentOfFileWithID:(NSString *)fileID fileData:(NSData *)fileData mimeType:(NSString *)mimeType completion:(ADNClientCompletionBlock)completionHandler;

@end