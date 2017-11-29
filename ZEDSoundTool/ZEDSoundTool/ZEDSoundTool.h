//
//  ZEDSoundTool.h
//  ZEDSoundTool
//
//  Created by 超李 on 2017/11/29.
//  Copyright © 2017年 ZED. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface ZEDSoundTool : NSObject

+ (instancetype)sharedSoundTool;

/**
 *  允许播放音效属性，如果设置为NO，全局不播放音效
 *
 *  从系统偏好中获取播放音效设置，如果系统偏好中不存在，则默认播放音效
 */
@property (assign, nonatomic) BOOL  enableSoundPlay;
/**
 *  允许播放音乐属性，如果设置为NO，全局不播放音乐
 *
 *  从系统偏好中获取播放音乐设置，如果系统偏好中不存在，则默认播放音乐
 */
@property (assign, nonatomic) BOOL  enableMusicPlay;

#pragma mark - 对象方法
/**
 *  使用声音包名称和背景音乐名称准备SoundTool
 *
 *  @param soundBundleName soundBundle名称
 *  @param backMusicName   背景音乐文件名
 */
- (void)prepareSoundToolWithSoundBundleName:(NSString *)soundBundleName backMusicName:(NSString *)backMusicName;

#pragma mark - 音效文件相关方法
/**
 *  声音字典中包含的音频文件数量
 *
 *  @return 音频文件数量
 */
- (NSInteger)numberOfSounds;
/**
 *  返回字典中的所有音效文件名
 *
 *  @return 音效文件名数组
 */
- (NSArray *)namesOfSounds;

/**
 *  使用文件名播放音效
 *
 *  @param name 要播放音效的声音文件名
 */
- (void)playSoundWithName:(NSString *)name;
- (void)playBackgroundMusicWithName:(NSString *)musicName;
/**
 *  使用文件名播放警告音效
 *
 *  @param name 要播放音效的声音文件名
 */
- (void)playAlertSoundWithName:(NSString *)name;

/**
 *  播放背景音乐
 */
- (void)playBackMusic;
/**
 *  暂停背景音乐
 */
- (void)pauseBackMusic;
/**
 *  停止背景音乐
 */
- (void)stopBackMusic;

-(void)loadMusicPlayerWithName:(NSString *)musicName;

//加载并播放铃声，如果当前有其他正在播放，则忽略此次
-(void)loadMusicIgnorePlayWithName:(NSString *)musicName;

#pragma mark 暂停音乐
- (void)pauseMusic;

#pragma mark 停止音乐
- (void)stopMusic;


#pragma mark - AVAudioPlayer相关类方法
/**
 *  使用指定的URL加载音乐播放器
 *
 *  @param url 音乐文件URL
 *
 *  @return 音乐播放器
 */
+ (AVAudioPlayer *)audioPlayerWithURL:(NSURL *)url;
/**
 *  使用指定的文件名从MainBundle中加载音乐播放器
 *
 *  @param fileName 音乐文件名
 *
 *  @return 音乐播放器
 */
+ (AVAudioPlayer *)audioPlayerWithName:(NSString *)fileName;
/**
 *  使用指定的文件名从bundleName中加载音乐播放器
 *
 *  @param bundleName 存放音乐文件的bundleName
 *  @param fileName   音乐文件名
 *
 *  @return 音乐播放器
 */
+ (AVAudioPlayer *)audioPlayerFromBundle:(NSString *)bundleName fileName:(NSString *)fileName;


@end
