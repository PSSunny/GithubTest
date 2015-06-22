/******************************************************************************
 * Copyright 2013, Qualcomm Innovation Center, Inc.
 *
 *    All rights reserved.
 *    This file is licensed under the 3-clause BSD license in the NOTICE.txt
 *    file for this project. A copy of the 3-clause BSD license is found at:
 *
 *        http://opensource.org/licenses/BSD-3-Clause.
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the license is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the license for the specific language governing permissions and
 *    limitations under the license.
 ******************************************************************************/

#import <Foundation/Foundation.h>

/*
 * This delegate is used by the Announcement, UnannounceFile, RequestFile, OfferFile, and
 * RequestOffer controller classes to notify the ViewController class to trigger the various
 * FileTransferModule operations.
 */
@protocol FileTransferOperationsDelegate <NSObject>

@required
-(void)announceFileWithPath: (NSString *)path;
-(void)unannounceFileWithName: (NSString *)fileName;
-(void)requestFileWithName: (NSString *)fileName;
-(void)prepareOfferFile;
-(void)offerFileWithFilePath: (NSString *)filePath toPeer: (NSString *)peer;
-(void)sendOfferRequestForFileWithPath: (NSString *)filePath toPeer: (NSString *)peer;

@end
