/*
 *  Licensed Materials - Property of IBM
 *  5725-I43 (C) Copyright IBM Corp. 2011, 2013. All Rights Reserved.
 *  US Government Users Restricted Rights - Use, duplication or
 *  disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */
//
//  IBMMobileFirstPlatformFoundation.h
//  IBMMobileFirstPlatformFoundation
//
//  Created by C A on 3/11/15.
//  Copyright (c) 2015 IBM. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for IBMMobileFirstPlatformFoundation.
FOUNDATION_EXPORT double IBMMobileFirstPlatformFoundationVersionNumber;

//! Project version string for IBMMobileFirstPlatformFoundation.
FOUNDATION_EXPORT const unsigned char IBMMobileFirstPlatformFoundationVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import "PublicHeader.h"


#import "AbstractAcquisitionError.h"
#import "AbstractGeoAreaTrigger.h"
#import "AcquisitionCallback.h"
#import "AcquisitionFailureCallback.h"
#import "BaseChallengeHandler.h"
#import "BaseDeviceAuthChallengeHandler.h"
#import "BaseProvisioningChallengeHandler.h"
#import "ChallengeHandler.h"
#import "OCLogger.h"
#import "OCLogger+Constants.h"
#import "WLAcquisitionFailureCallbacksConfiguration.h"
#import "WLAcquisitionPolicy.h"
#import "WLAnalytics.h"
#import "WLArea.h"
#import "WLAuthorizationManager.h"
#import "WLCallbackFactory.h"
#import "WLChallengeHandler.h"
#import "WLCircle.h"
#import "WLClient.h"
#import "WLConfidenceLevel.h"
#import "WLCookieExtractor.h"
#import "WLCoordinate.h"
#import "WLDelegate.h"
#import "WLDevice.h"
#import "WLDeviceAuthManager.h"
#import "WLDeviceContext.h"
#import "WLEventSourceListener.h"
#import "WLEventTransmissionPolicy.h"
#import "WLFailResponse.h"
#import "WLGeoAcquisitionPolicy.h"
#import "WLGeoCallback.h"
#import "WLGeoDwellInsideTrigger.h"
#import "WLGeoDwellOutsideTrigger.h"
#import "WLGeoEnterTrigger.h"
#import "WLGeoError.h"
#import "WLGeoExitTrigger.h"
#import "WLGeoFailureCallback.h"
#import "WLGeoPosition.h"
#import "WLGeoPositionChangeTrigger.h"
#import "WLGeoTrigger.h"
#import "WLGeoUtils.h"
#import "WLLocationServicesConfiguration.h"
#import "WLOnReadyToSubscribeListener.h"
#import "WLPolygon.h"
#import "WLProcedureInvocationData.h"
#import "WLProcedureInvocationResult.h"
#import "WLPush.h"
#import "WLPushOptions.h"
#import "WLResourceRequest.h"
#import "WLResponse.h"
#import "WLResponseListener.h"
#import "WLSecurityUtils.h"
#import "WLSimpleDataSharing.h"
#import "WLTriggerCallback.h"
#import "WLTriggersConfiguration.h"
#import "WLTrusteer.h"
#import "WLUserCertAuth.h"
#import "WLWifiAccessPoint.h"
#import "WLWifiAccessPointFilter.h"
#import "WLWifiAcquisitionCallback.h"
#import "WLWifiAcquisitionPolicy.h"
#import "WLWifiConnectedCallback.h"
#import "WLWifiConnectTrigger.h"
#import "WLWifiDisconnectTrigger.h"
#import "WLWifiDwellInsideTrigger.h"
#import "WLWifiDwellOutsideTrigger.h"
#import "WLWifiEnterTrigger.h"
#import "WLWifiError.h"
#import "WLWifiExitTrigger.h"
#import "WLWifiFailureCallback.h"
#import "WLWifiLocation.h"
#import "WLWifiTrigger.h"
#import "WLWifiVisibleAccessPointsChangeTrigger.h"
