/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.93
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { BTUserAgentVersion } from './bTUserAgentVersion';

export class BTDeviceInfo {
    'description'?: string;
    'version'?: BTUserAgentVersion;
    'clientType'?: BTDeviceInfo.ClientTypeEnum;
    'deviceName'?: string;
    'operatingSystem'?: BTDeviceInfo.OperatingSystemEnum;
    'deviceType'?: string;
    'browser'?: BTDeviceInfo.BrowserEnum;
    'manufacturer'?: string;
    'mobile'?: boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "version",
            "baseName": "version",
            "type": "BTUserAgentVersion"
        },
        {
            "name": "clientType",
            "baseName": "clientType",
            "type": "BTDeviceInfo.ClientTypeEnum"
        },
        {
            "name": "deviceName",
            "baseName": "deviceName",
            "type": "string"
        },
        {
            "name": "operatingSystem",
            "baseName": "operatingSystem",
            "type": "BTDeviceInfo.OperatingSystemEnum"
        },
        {
            "name": "deviceType",
            "baseName": "deviceType",
            "type": "string"
        },
        {
            "name": "browser",
            "baseName": "browser",
            "type": "BTDeviceInfo.BrowserEnum"
        },
        {
            "name": "manufacturer",
            "baseName": "manufacturer",
            "type": "string"
        },
        {
            "name": "mobile",
            "baseName": "mobile",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return BTDeviceInfo.attributeTypeMap;
    }
}

export namespace BTDeviceInfo {
    export enum ClientTypeEnum {
        UNKNOWN = <any> 'UNKNOWN',
        BROWSER = <any> 'BROWSER',
        IOS = <any> 'IOS',
        ANDROID = <any> 'ANDROID',
        MAGICLEAP = <any> 'MAGIC_LEAP'
    }
    export enum OperatingSystemEnum {
        WINDOWS = <any> 'WINDOWS',
        WINDOWS10 = <any> 'WINDOWS_10',
        WINDOWS81 = <any> 'WINDOWS_81',
        WINDOWS8 = <any> 'WINDOWS_8',
        WINDOWS7 = <any> 'WINDOWS_7',
        WINDOWSVISTA = <any> 'WINDOWS_VISTA',
        WINDOWS2000 = <any> 'WINDOWS_2000',
        WINDOWSXP = <any> 'WINDOWS_XP',
        WINDOWS10MOBILE = <any> 'WINDOWS_10_MOBILE',
        WINDOWSPHONE81 = <any> 'WINDOWS_PHONE8_1',
        WINDOWSPHONE8 = <any> 'WINDOWS_PHONE8',
        WINDOWSMOBILE7 = <any> 'WINDOWS_MOBILE7',
        WINDOWSMOBILE = <any> 'WINDOWS_MOBILE',
        WINDOWS98 = <any> 'WINDOWS_98',
        XBOXOS = <any> 'XBOX_OS',
        ONSHAPE = <any> 'ONSHAPE',
        ONSHAPEANDROID = <any> 'ONSHAPE_ANDROID',
        ONSHAPEANDROID7 = <any> 'ONSHAPE_ANDROID_7',
        ONSHAPEANDROID6 = <any> 'ONSHAPE_ANDROID_6',
        ONSHAPEANDROID5 = <any> 'ONSHAPE_ANDROID_5',
        ONSHAPEANDROID4 = <any> 'ONSHAPE_ANDROID_4',
        ONSHAPEANDROIDTABLET = <any> 'ONSHAPE_ANDROID_TABLET',
        ONSHAPEANDROID7TABLET = <any> 'ONSHAPE_ANDROID_7_TABLET',
        ONSHAPEANDROID6TABLET = <any> 'ONSHAPE_ANDROID_6_TABLET',
        ONSHAPEANDROID5TABLET = <any> 'ONSHAPE_ANDROID_5_TABLET',
        ONSHAPEANDROID4TABLET = <any> 'ONSHAPE_ANDROID_4_TABLET',
        ONSHAPEIPHONE = <any> 'ONSHAPE_IPHONE',
        ONSHAPEIPHONE10 = <any> 'ONSHAPE_IPHONE_10',
        ONSHAPEIPHONE9 = <any> 'ONSHAPE_IPHONE_9',
        ONSHAPEIPHONE84 = <any> 'ONSHAPE_IPHONE_8_4',
        ONSHAPEIPHONE83 = <any> 'ONSHAPE_IPHONE_8_3',
        ONSHAPEIPHONE82 = <any> 'ONSHAPE_IPHONE_8_2',
        ONSHAPEIPHONE81 = <any> 'ONSHAPE_IPHONE_8_1',
        ONSHAPEIPHONE8 = <any> 'ONSHAPE_IPHONE_8',
        ONSHAPEIPHONE7 = <any> 'ONSHAPE_IPHONE_7',
        ONSHAPEIPAD = <any> 'ONSHAPE_IPAD',
        ONSHAPEIPAD10 = <any> 'ONSHAPE_IPAD_10',
        ONSHAPEIPAD9 = <any> 'ONSHAPE_IPAD_9',
        ONSHAPEIPAD84 = <any> 'ONSHAPE_IPAD_8_4',
        ONSHAPEIPAD83 = <any> 'ONSHAPE_IPAD_8_3',
        ONSHAPEIPAD82 = <any> 'ONSHAPE_IPAD_8_2',
        ONSHAPEIPAD81 = <any> 'ONSHAPE_IPAD_8_1',
        ONSHAPEIPAD8 = <any> 'ONSHAPE_IPAD_8',
        ONSHAPEIPAD7 = <any> 'ONSHAPE_IPAD_7',
        ONSHAPEIPOD = <any> 'ONSHAPE_IPOD',
        ONSHAPEIPOD10 = <any> 'ONSHAPE_IPOD_10',
        ONSHAPEIPOD9 = <any> 'ONSHAPE_IPOD_9',
        ONSHAPEIPOD84 = <any> 'ONSHAPE_IPOD_8_4',
        ONSHAPEIPOD83 = <any> 'ONSHAPE_IPOD_8_3',
        ONSHAPEIPOD82 = <any> 'ONSHAPE_IPOD_8_2',
        ONSHAPEIPOD81 = <any> 'ONSHAPE_IPOD_8_1',
        ONSHAPEIPOD8 = <any> 'ONSHAPE_IPOD_8',
        ONSHAPEIPOD7 = <any> 'ONSHAPE_IPOD_7',
        ANDROID = <any> 'ANDROID',
        ANDROID7 = <any> 'ANDROID7',
        ANDROID7TABLET = <any> 'ANDROID7_TABLET',
        ANDROID6 = <any> 'ANDROID6',
        ANDROID6TABLET = <any> 'ANDROID6_TABLET',
        ANDROID5 = <any> 'ANDROID5',
        ANDROID5TABLET = <any> 'ANDROID5_TABLET',
        ANDROID4 = <any> 'ANDROID4',
        ANDROID4TABLET = <any> 'ANDROID4_TABLET',
        ANDROID4WEARABLE = <any> 'ANDROID4_WEARABLE',
        ANDROID3TABLET = <any> 'ANDROID3_TABLET',
        ANDROID2 = <any> 'ANDROID2',
        ANDROID2TABLET = <any> 'ANDROID2_TABLET',
        ANDROID1 = <any> 'ANDROID1',
        ANDROIDMOBILE = <any> 'ANDROID_MOBILE',
        ANDROIDTABLET = <any> 'ANDROID_TABLET',
        CHROMEOS = <any> 'CHROME_OS',
        WEBOS = <any> 'WEBOS',
        PALM = <any> 'PALM',
        MEEGO = <any> 'MEEGO',
        IOS = <any> 'IOS',
        IOS10IPHONE = <any> 'iOS10_IPHONE',
        IOS9IPHONE = <any> 'iOS9_IPHONE',
        IOS84IPHONE = <any> 'iOS8_4_IPHONE',
        IOS83IPHONE = <any> 'iOS8_3_IPHONE',
        IOS82IPHONE = <any> 'iOS8_2_IPHONE',
        IOS81IPHONE = <any> 'iOS8_1_IPHONE',
        IOS8IPHONE = <any> 'iOS8_IPHONE',
        IOS7IPHONE = <any> 'iOS7_IPHONE',
        IOS6IPHONE = <any> 'iOS6_IPHONE',
        IOS5IPHONE = <any> 'iOS5_IPHONE',
        IOS4IPHONE = <any> 'iOS4_IPHONE',
        MACOSXIPAD = <any> 'MAC_OS_X_IPAD',
        IOS10IPAD = <any> 'iOS10_IPAD',
        IOS9IPAD = <any> 'iOS9_IPAD',
        IOS84IPAD = <any> 'iOS8_4_IPAD',
        IOS83IPAD = <any> 'iOS8_3_IPAD',
        IOS82IPAD = <any> 'iOS8_2_IPAD',
        IOS81IPAD = <any> 'iOS8_1_IPAD',
        IOS8IPAD = <any> 'iOS8_IPAD',
        IOS7IPAD = <any> 'iOS7_IPAD',
        IOS6IPAD = <any> 'iOS6_IPAD',
        MACOSXIPHONE = <any> 'MAC_OS_X_IPHONE',
        MACOSXIPOD = <any> 'MAC_OS_X_IPOD',
        MACOSX = <any> 'MAC_OS_X',
        MACOS = <any> 'MAC_OS',
        MAEMO = <any> 'MAEMO',
        BADA = <any> 'BADA',
        GOOGLETV = <any> 'GOOGLE_TV',
        KINDLE = <any> 'KINDLE',
        KINDLE3 = <any> 'KINDLE3',
        KINDLE2 = <any> 'KINDLE2',
        LINUX = <any> 'LINUX',
        UBUNTU = <any> 'UBUNTU',
        UBUNTUTOUCHMOBILE = <any> 'UBUNTU_TOUCH_MOBILE',
        SYMBIAN = <any> 'SYMBIAN',
        SYMBIAN9 = <any> 'SYMBIAN9',
        SYMBIAN8 = <any> 'SYMBIAN8',
        SYMBIAN7 = <any> 'SYMBIAN7',
        SYMBIAN6 = <any> 'SYMBIAN6',
        SERIES40 = <any> 'SERIES40',
        SONYERICSSON = <any> 'SONY_ERICSSON',
        SUNOS = <any> 'SUN_OS',
        PSP = <any> 'PSP',
        WII = <any> 'WII',
        BLACKBERRY = <any> 'BLACKBERRY',
        BLACKBERRY7 = <any> 'BLACKBERRY7',
        BLACKBERRY6 = <any> 'BLACKBERRY6',
        BLACKBERRYTABLET = <any> 'BLACKBERRY_TABLET',
        ROKU = <any> 'ROKU',
        PROXY = <any> 'PROXY',
        UNKNOWNMOBILE = <any> 'UNKNOWN_MOBILE',
        UNKNOWNTABLET = <any> 'UNKNOWN_TABLET',
        UNKNOWN = <any> 'UNKNOWN'
    }
    export enum BrowserEnum {
        OUTLOOK = <any> 'OUTLOOK',
        OUTLOOK2007 = <any> 'OUTLOOK2007',
        OUTLOOK2013 = <any> 'OUTLOOK2013',
        OUTLOOK2010 = <any> 'OUTLOOK2010',
        IE = <any> 'IE',
        OUTLOOKEXPRESS7 = <any> 'OUTLOOK_EXPRESS7',
        IEMOBILE11 = <any> 'IEMOBILE11',
        IEMOBILE10 = <any> 'IEMOBILE10',
        IEMOBILE9 = <any> 'IEMOBILE9',
        IEMOBILE7 = <any> 'IEMOBILE7',
        IEMOBILE6 = <any> 'IEMOBILE6',
        IEXBOX = <any> 'IE_XBOX',
        IE11 = <any> 'IE11',
        IE10 = <any> 'IE10',
        IE9 = <any> 'IE9',
        IE8 = <any> 'IE8',
        IE7 = <any> 'IE7',
        IE6 = <any> 'IE6',
        IE55 = <any> 'IE5_5',
        IE5 = <any> 'IE5',
        EDGE = <any> 'EDGE',
        EDGE12 = <any> 'EDGE12',
        EDGEMOBILE12 = <any> 'EDGE_MOBILE12',
        CHROME = <any> 'CHROME',
        CHROMEMOBILE = <any> 'CHROME_MOBILE',
        CHROME46 = <any> 'CHROME46',
        CHROME45 = <any> 'CHROME45',
        CHROME44 = <any> 'CHROME44',
        CHROME43 = <any> 'CHROME43',
        CHROME42 = <any> 'CHROME42',
        CHROME41 = <any> 'CHROME41',
        CHROME40 = <any> 'CHROME40',
        CHROME39 = <any> 'CHROME39',
        CHROME38 = <any> 'CHROME38',
        CHROME37 = <any> 'CHROME37',
        CHROME36 = <any> 'CHROME36',
        CHROME35 = <any> 'CHROME35',
        CHROME34 = <any> 'CHROME34',
        CHROME33 = <any> 'CHROME33',
        CHROME32 = <any> 'CHROME32',
        CHROME31 = <any> 'CHROME31',
        CHROME30 = <any> 'CHROME30',
        CHROME29 = <any> 'CHROME29',
        CHROME28 = <any> 'CHROME28',
        CHROME27 = <any> 'CHROME27',
        CHROME26 = <any> 'CHROME26',
        CHROME25 = <any> 'CHROME25',
        CHROME24 = <any> 'CHROME24',
        CHROME23 = <any> 'CHROME23',
        CHROME22 = <any> 'CHROME22',
        CHROME21 = <any> 'CHROME21',
        CHROME20 = <any> 'CHROME20',
        CHROME19 = <any> 'CHROME19',
        CHROME18 = <any> 'CHROME18',
        CHROME17 = <any> 'CHROME17',
        CHROME16 = <any> 'CHROME16',
        CHROME15 = <any> 'CHROME15',
        CHROME14 = <any> 'CHROME14',
        CHROME13 = <any> 'CHROME13',
        CHROME12 = <any> 'CHROME12',
        CHROME11 = <any> 'CHROME11',
        CHROME10 = <any> 'CHROME10',
        CHROME9 = <any> 'CHROME9',
        CHROME8 = <any> 'CHROME8',
        OMNIWEB = <any> 'OMNIWEB',
        SAFARI = <any> 'SAFARI',
        BLACKBERRY10 = <any> 'BLACKBERRY10',
        MOBILESAFARI = <any> 'MOBILE_SAFARI',
        SILK = <any> 'SILK',
        SAFARI9 = <any> 'SAFARI9',
        SAFARI8 = <any> 'SAFARI8',
        SAFARI7 = <any> 'SAFARI7',
        SAFARI6 = <any> 'SAFARI6',
        SAFARI5 = <any> 'SAFARI5',
        SAFARI4 = <any> 'SAFARI4',
        COAST = <any> 'COAST',
        COAST1 = <any> 'COAST1',
        OPERA = <any> 'OPERA',
        OPERAMOBILE = <any> 'OPERA_MOBILE',
        OPERAMINI = <any> 'OPERA_MINI',
        OPERA34 = <any> 'OPERA34',
        OPERA33 = <any> 'OPERA33',
        OPERA32 = <any> 'OPERA32',
        OPERA31 = <any> 'OPERA31',
        OPERA30 = <any> 'OPERA30',
        OPERA29 = <any> 'OPERA29',
        OPERA28 = <any> 'OPERA28',
        OPERA27 = <any> 'OPERA27',
        OPERA26 = <any> 'OPERA26',
        OPERA25 = <any> 'OPERA25',
        OPERA24 = <any> 'OPERA24',
        OPERA23 = <any> 'OPERA23',
        OPERA20 = <any> 'OPERA20',
        OPERA19 = <any> 'OPERA19',
        OPERA18 = <any> 'OPERA18',
        OPERA17 = <any> 'OPERA17',
        OPERA16 = <any> 'OPERA16',
        OPERA15 = <any> 'OPERA15',
        OPERA12 = <any> 'OPERA12',
        OPERA11 = <any> 'OPERA11',
        OPERA10 = <any> 'OPERA10',
        OPERA9 = <any> 'OPERA9',
        KONQUEROR = <any> 'KONQUEROR',
        DOLFIN2 = <any> 'DOLFIN2',
        APPLEWEBKIT = <any> 'APPLE_WEB_KIT',
        APPLEITUNES = <any> 'APPLE_ITUNES',
        APPLEAPPSTORE = <any> 'APPLE_APPSTORE',
        ADOBEAIR = <any> 'ADOBE_AIR',
        LOTUSNOTES = <any> 'LOTUS_NOTES',
        CAMINO = <any> 'CAMINO',
        CAMINO2 = <any> 'CAMINO2',
        FLOCK = <any> 'FLOCK',
        FIREFOX = <any> 'FIREFOX',
        FIREFOX3MOBILE = <any> 'FIREFOX3MOBILE',
        FIREFOXMOBILE = <any> 'FIREFOX_MOBILE',
        FIREFOXMOBILE23 = <any> 'FIREFOX_MOBILE23',
        FIREFOX42 = <any> 'FIREFOX42',
        FIREFOX41 = <any> 'FIREFOX41',
        FIREFOX40 = <any> 'FIREFOX40',
        FIREFOX39 = <any> 'FIREFOX39',
        FIREFOX38 = <any> 'FIREFOX38',
        FIREFOX37 = <any> 'FIREFOX37',
        FIREFOX36 = <any> 'FIREFOX36',
        FIREFOX35 = <any> 'FIREFOX35',
        FIREFOX34 = <any> 'FIREFOX34',
        FIREFOX33 = <any> 'FIREFOX33',
        FIREFOX32 = <any> 'FIREFOX32',
        FIREFOX31 = <any> 'FIREFOX31',
        FIREFOX30 = <any> 'FIREFOX30',
        FIREFOX29 = <any> 'FIREFOX29',
        FIREFOX28 = <any> 'FIREFOX28',
        FIREFOX27 = <any> 'FIREFOX27',
        FIREFOX26 = <any> 'FIREFOX26',
        FIREFOX25 = <any> 'FIREFOX25',
        FIREFOX24 = <any> 'FIREFOX24',
        FIREFOX23 = <any> 'FIREFOX23',
        FIREFOX22 = <any> 'FIREFOX22',
        FIREFOX21 = <any> 'FIREFOX21',
        FIREFOX20 = <any> 'FIREFOX20',
        FIREFOX19 = <any> 'FIREFOX19',
        FIREFOX18 = <any> 'FIREFOX18',
        FIREFOX17 = <any> 'FIREFOX17',
        FIREFOX16 = <any> 'FIREFOX16',
        FIREFOX15 = <any> 'FIREFOX15',
        FIREFOX14 = <any> 'FIREFOX14',
        FIREFOX13 = <any> 'FIREFOX13',
        FIREFOX12 = <any> 'FIREFOX12',
        FIREFOX11 = <any> 'FIREFOX11',
        FIREFOX10 = <any> 'FIREFOX10',
        FIREFOX9 = <any> 'FIREFOX9',
        FIREFOX8 = <any> 'FIREFOX8',
        FIREFOX7 = <any> 'FIREFOX7',
        FIREFOX6 = <any> 'FIREFOX6',
        FIREFOX5 = <any> 'FIREFOX5',
        FIREFOX4 = <any> 'FIREFOX4',
        FIREFOX3 = <any> 'FIREFOX3',
        FIREFOX2 = <any> 'FIREFOX2',
        FIREFOX15 = <any> 'FIREFOX1_5',
        THUNDERBIRD = <any> 'THUNDERBIRD',
        THUNDERBIRD12 = <any> 'THUNDERBIRD12',
        THUNDERBIRD11 = <any> 'THUNDERBIRD11',
        THUNDERBIRD10 = <any> 'THUNDERBIRD10',
        THUNDERBIRD8 = <any> 'THUNDERBIRD8',
        THUNDERBIRD7 = <any> 'THUNDERBIRD7',
        THUNDERBIRD6 = <any> 'THUNDERBIRD6',
        THUNDERBIRD3 = <any> 'THUNDERBIRD3',
        THUNDERBIRD2 = <any> 'THUNDERBIRD2',
        VIVALDI = <any> 'VIVALDI',
        ONSHAPE = <any> 'ONSHAPE',
        ONSHAPEIPAD = <any> 'ONSHAPE_IPAD',
        ONSHAPEIPHONE = <any> 'ONSHAPE_IPHONE',
        ONSHAPEANDROID = <any> 'ONSHAPE_ANDROID',
        SEAMONKEY = <any> 'SEAMONKEY',
        BOT = <any> 'BOT',
        BOTMOBILE = <any> 'BOT_MOBILE',
        MOZILLA = <any> 'MOZILLA',
        CFNETWORK = <any> 'CFNETWORK',
        EUDORA = <any> 'EUDORA',
        POCOMAIL = <any> 'POCOMAIL',
        THEBAT = <any> 'THEBAT',
        NETFRONT = <any> 'NETFRONT',
        EVOLUTION = <any> 'EVOLUTION',
        LYNX = <any> 'LYNX',
        DOWNLOAD = <any> 'DOWNLOAD',
        UNKNOWN = <any> 'UNKNOWN',
        APPLEMAIL = <any> 'APPLE_MAIL'
    }
}
