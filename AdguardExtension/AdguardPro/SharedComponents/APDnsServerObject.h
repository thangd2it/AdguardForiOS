/**
    This file is part of Adguard for iOS (https://github.com/AdguardTeam/AdguardForiOS).
    Copyright © 2015-2017 Performix LLC. All rights reserved.
 
    Adguard for iOS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
 
    Adguard for iOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
 
    You should have received a copy of the GNU General Public License
    along with Adguard for iOS.  If not, see <http://www.gnu.org/licenses/>.
 */

#import "ACObject.h"

/////////////////////////////////////////////////////////////////////
#pragma mark - APDnsServerObject

/**
 Representation object for custom DNS server.
 */
@interface APDnsServerObject  : ACObject

/////////////////////////////////////////////////////////////////////
#pragma mark Init and Class methods

- (id _Nullable)initWithName:(NSString * _Nonnull)serverName
       description:(NSString * _Nonnull)serverDescription
       ipAddresses:(NSString * _Nonnull)ipAddresses;

/////////////////////////////////////////////////////////////////////
#pragma mark Properties and public methods

/**
 Title of the object
 */
@property (nonnull) NSString *serverName;
/**
 Description of the object
 */
@property (nonnull) NSString *serverDescription;

/**
 Array, which contains ipV4 addresses in form of strings.
 */
@property (nonnull) NSArray <NSString *> *ipv4Addresses;
/**
 Array, which contains ipV6 addresses in form of strings.
 */
@property (nonnull) NSArray <NSString *> *ipv6Addresses;

/**
 Returns list of all IPs (ipV4 and ipV6) separated by '\n'.

 @return IPs addresses or empty string.
 */
- (NSString * _Nonnull)ipAddressesAsString;
/**
 Parses input string and fills appropriate properties (`ipv4Addresses`, `ipv6Addresses`).
 
 @param ipAddresses String for parsing.
 */
- (void)setIpAddressesFromString:(NSString  * _Nonnull)ipAddresses;

@end
