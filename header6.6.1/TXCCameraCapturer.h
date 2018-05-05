//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureConnection, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CIDetector, CMMotionManager, NSObject, NSString;
@protocol OS_dispatch_queue, TXICameraCapturerDelegate, TXINotifyDelegate;

@interface TXCCameraCapturer : TXCModule <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    unsigned long long _lastCalculateTS;
    unsigned long long _lastCaptureFrameCount;
    unsigned long long _captureFrameCount;
    _Bool _front;
    double _presetWidth;
    double _presetHeight;
    unsigned long long _lastDetectedTimeStame;
    int _exifOrientation;
    int _tryDetectCount;
    int _detectTimeCtrl;
    _Bool _subjectAreaChanged;
    _Bool _faceDetect;
    _Bool _mirror;
    int _frameRate;
    id <TXICameraCapturerDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    double _zoomScale;
    long long _homeOrientation;
    long long _rotation;
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_inputCamera;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureConnection *_videoConnection;
    CIDetector *_faceDetector;
    NSObject<OS_dispatch_queue> *_cameraProcessingQueue;
    NSObject<OS_dispatch_queue> *_faceDetectQueue;
    CMMotionManager *_motionMgr;
    long long _position;
    AVCaptureVideoPreviewLayer *_prevLayer;
    struct CGSize _videoSize;
}

+ (_Bool)isFrontFacingCameraPresent;
+ (_Bool)isBackFacingCameraPresent;
+ (_Bool)requestForAccess;
@property(retain) AVCaptureVideoPreviewLayer *prevLayer; // @synthesize prevLayer=_prevLayer;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *faceDetectQueue; // @synthesize faceDetectQueue=_faceDetectQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraProcessingQueue; // @synthesize cameraProcessingQueue=_cameraProcessingQueue;
@property(retain) CIDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(retain) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(retain) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(retain) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) _Bool faceDetect; // @synthesize faceDetect=_faceDetect;
@property __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property __weak id <TXICameraCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
- (void)detectFace:(struct opaqueCMSampleBuffer *)arg1;
- (id)genVFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)setSessionPreset:(id)arg1;
- (_Bool)setResolution:(long long)arg1;
- (struct CGPoint)devicePointForPoint:(struct CGPoint)arg1;
- (void)resetInterestPoint:(struct CGPoint)arg1 monitorSubjectAreaChange:(_Bool)arg2;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)subjectAreaDidChange:(id)arg1;
- (void)stop;
- (void)start;
@property(nonatomic) _Bool flashEnable;
@property int frameRate; // @synthesize frameRate=_frameRate;
- (id)cameraWithPosition:(long long)arg1;
- (void)rotateCamera;
@property(nonatomic) _Bool front;
- (void)initCameraCapture;
- (id)init;
- (void)runTXCAsynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)runTXCSynchronouslyOnCameraProcessingQueue:(CDUnknownBlockType)arg1;
- (void)sendNotifyEvent:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
