/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceFaceProcessingWorker : PHAVisionServiceWorker <PLPhotoAnalysisVisionServiceFaceProcessingProtocol, PVCVMLIntegrating, PVNotificationListener> {
    BOOL  _disabledByUserDefaults;
    PHAVisionServicePersistenceDelegate * _persistenceDelegate;
    PhotoVision * _photoVision;
    BOOL  _reclusteringRequired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (int)applicationDataFolderIdentifier;
+ (BOOL)runsExclusively;
+ (short)workerType;

- (void).cxx_destruct;
- (unsigned int)_analyzeAsset:(id)arg1 withAttributes:(id)arg2 usingPVImageProvidedByBlock:(id /* block */)arg3 error:(id*)arg4;
- (id)_analyzePVImage:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (id)_changeAsset:(id)arg1 faceDetectionState:(int)arg2 error:(id*)arg3;
- (void)_didPerformFaceClustering;
- (id)_faceDescriptionsOfFacesInImageWithSRGBImageData:(id)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 bytesPerRow:(unsigned long)arg4 bitmapInfo:(unsigned int)arg5 error:(id*)arg6;
- (id)_faceSuggestionsForFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)_faceSuggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 error:(id*)arg4;
- (id)_faceSuggestionsFromKeyFaceClustSeqNums:(id)arg1 excludeFaceLocalIdentifers:(id)arg2;
- (void)_handleNilReplyBlockForSelector:(SEL)arg1;
- (id)_newFaceGroupsFetchOptions;
- (id)_newFacesFetchOptions;
- (id)_newPersonsFetchOptions;
- (BOOL)_performFaceClusteringWithCompletion:(id /* block */)arg1;
- (void)_performForcedFaceClustering:(BOOL)arg1 whileKeepingAliveJob:(id)arg2;
- (void)_performFullCVMLCleanup;
- (void)_performIntermediateCVMLCleanup;
- (int)_performPersistedFaceAnalysisOfPVImage:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4;
- (int)_performPersistedFaceAnalysisOfResource:(id)arg1 withAttributes:(id)arg2 forAsset:(id)arg3 error:(id*)arg4;
- (id)_photoVisionAllowingCreation:(BOOL)arg1 error:(id*)arg2;
- (id)_pvImageForAsset:(id)arg1 error:(id*)arg2;
- (id)_pvImageForAssetResource:(id)arg1 assetWidth:(unsigned long)arg2 assetHeight:(unsigned long)arg3 error:(id*)arg4;
- (id)_pvImageForAssetResourceFileURL:(id)arg1 assetWidth:(unsigned long)arg2 assetHeight:(unsigned long)arg3 error:(id*)arg4;
- (BOOL)_renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2;
- (BOOL)_scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 priority:(int)arg2 error:(id*)arg3;
- (BOOL)_shouldPerformFaceAnalysisForAsset:(id)arg1;
- (BOOL)_synchronouslyGenerateFaceTilesForFaces:(id)arg1 fromAsset:(id)arg2 assetImage:(id)arg3 error:(id*)arg4;
- (void)_terminatePhotoVision;
- (BOOL)_validateAsset:(id)arg1 error:(id*)arg2;
- (void)_willPerformFaceClustering;
- (unsigned int)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (unsigned int)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id*)arg4;
- (void)cooldown;
- (void)faceClusteringInformation:(unsigned int)arg1 withContext:(id)arg2 reply:(id /* block */)arg3;
- (BOOL)getLocallyAvailableAssetResource:(id*)arg1 forAnalyzingAsset:(id)arg2 error:(id*)arg3;
- (void)handlePVNotification:(id)arg1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned int)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (BOOL)isEnabled;
- (id)newAssetFetchOptions;
- (id)newPhotoVisionCVMLRequestOptions;
- (id)nextAdditionalJobWithScenario:(unsigned int)arg1;
- (void)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 bytesPerRow:(unsigned long)arg4 bitmapInfo:(unsigned int)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (BOOL)processAsset:(id)arg1 error:(id*)arg2;
- (void)reclusterFacesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)resetFaceClusteringStateWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)shutdown;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)suggestFacesForFacesWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)suggestFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)suggestPersonForFaceWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)willCompleteJob:(id)arg1;

@end
