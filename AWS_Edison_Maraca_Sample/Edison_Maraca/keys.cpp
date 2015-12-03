// keys.cpp
#include "keys.h"

const char* awsKeyID = "AKIAIKA2XFRHV5VCYTFA"; // REPLACE with your access key id
const char* awsSecKey = "iSRHTfQ3205qy6ai4YmAQF3qJ5gDYXsMdjg97zvj"; // REPLACE with your secret access key

// Init and connect Edison wifi to local wlan
// TODO: if at loft01AwsLoft01
//char* ssid = "AWS-DX"; //  your network SSID (name)
//char* pass = "awsactivate";    // your network password (use for WPA, or use as key for WEP)

char* ssid = "6A13 Hyperoptic 1Gbps Broadband"; //  your network SSID (name)
char* pass = "neze5sbj";    // your network password (use for WPA, or use as key for WEP)

// Common AWS constants
const char* AWS_REGION = "eu-west-1";  // us-west-2 etc
const char* AWS_ENDPOINT = "amazonaws.com";

/* Constants for connecting to Amazon SNS. */
const char* TARGET_ARN = "arn:aws:sns:eu-west-1:062761267187:TestSoftIoT001-DeviceSNSTopic-144I23WDHIO1H";  // replace each ':' with '%3A'
//const char* TARGET_ARN = "arn%3Aaws%3Asns%3Aeu-west-1%3A062761267187%3ATestSoftIoT001-DeviceSNSTopic-144I23WDHIO1H";

/* Contants describing DynamoDB table and values being used. */
const char* HASH_KEY_NAME = "device_id";
const char* HASH_KEY_VALUE = "thingy01"; // REPLACE with your team or particpant name e.g Team38
const char* RANGE_KEY_NAME = "time";
const char* RANGE_KEY_VALUE = "1";
const char* TABLE_NAME = "TestSoftIoT001-DeviceDataTable-LH78FF501F5T"; //REPLACE with your DDB Table name e.g. hackday-2014-team38
const char* ATTRIBUTE_NAME = "device";
const char* ATTRIBUTE_VALUE = "edison";

/* Constants describing Kinesis stream */
const char* streamName = "TestSoftIoT001-DeviceStream-1QKIAZWU4W3Z5"; //REPLACE with your stream name e.g. hackday-2014-team38-TeamStream-1K5DAIU8GCRXY
const char* partitionKey = "partitionKey";



































































