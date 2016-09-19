// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkXml_H
#define _C_CkXml_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkXml CkXml_Create(void);
CK_VISIBLE_PUBLIC void CkXml_Dispose(HCkXml handle);
CK_VISIBLE_PUBLIC BOOL CkXml_getCdata(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putCdata(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXml_getContent(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXml_putContent(HCkXml cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXml_content(HCkXml cHandle);
CK_VISIBLE_PUBLIC int CkXml_getContentInt(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putContentInt(HCkXml cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkXml_getDebugLogFilePath(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXml_putDebugLogFilePath(HCkXml cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXml_debugLogFilePath(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_getDocType(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXml_putDocType(HCkXml cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXml_docType(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_getEmitBom(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putEmitBom(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXml_getEmitXmlDecl(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putEmitXmlDecl(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXml_getEncoding(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXml_putEncoding(HCkXml cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXml_encoding(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_getLastErrorHtml(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXml_lastErrorHtml(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_getLastErrorText(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXml_lastErrorText(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_getLastErrorXml(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXml_lastErrorXml(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_getLastMethodSuccess(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putLastMethodSuccess(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkXml_getNumAttributes(HCkXml cHandle);
CK_VISIBLE_PUBLIC int CkXml_getNumChildren(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_getSortCaseInsensitive(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putSortCaseInsensitive(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXml_getStandalone(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putStandalone(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXml_getTag(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXml_putTag(HCkXml cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXml_tag(HCkXml cHandle);
CK_VISIBLE_PUBLIC int CkXml_getTreeId(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_getUtf8(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putUtf8(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXml_getVerboseLogging(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_putVerboseLogging(HCkXml cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXml_getVersion(HCkXml cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXml_version(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_AccumulateTagContent(HCkXml cHandle, const char *tag, const char *skipTags, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_accumulateTagContent(HCkXml cHandle, const char *tag, const char *skipTags);
CK_VISIBLE_PUBLIC BOOL CkXml_AddAttribute(HCkXml cHandle, const char *name, const char *value);
CK_VISIBLE_PUBLIC BOOL CkXml_AddAttributeInt(HCkXml cHandle, const char *name, int value);
CK_VISIBLE_PUBLIC BOOL CkXml_AddChildTree(HCkXml cHandle, HCkXml tree);
CK_VISIBLE_PUBLIC void CkXml_AddOrUpdateAttribute(HCkXml cHandle, const char *name, const char *value);
CK_VISIBLE_PUBLIC void CkXml_AddOrUpdateAttributeI(HCkXml cHandle, const char *name, int value);
CK_VISIBLE_PUBLIC void CkXml_AddStyleSheet(HCkXml cHandle, const char *styleSheet);
CK_VISIBLE_PUBLIC void CkXml_AddToAttribute(HCkXml cHandle, const char *name, int amount);
CK_VISIBLE_PUBLIC void CkXml_AddToChildContent(HCkXml cHandle, const char *tag, int amount);
CK_VISIBLE_PUBLIC void CkXml_AddToContent(HCkXml cHandle, int amount);
CK_VISIBLE_PUBLIC BOOL CkXml_AppendToContent(HCkXml cHandle, const char *str);
CK_VISIBLE_PUBLIC BOOL CkXml_BEncodeContent(HCkXml cHandle, const char *charset, HCkByteData inData);
CK_VISIBLE_PUBLIC BOOL CkXml_ChildContentMatches(HCkXml cHandle, const char *tag, const char *pattern, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkXml_ChilkatPath(HCkXml cHandle, const char *pathCmd, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_chilkatPath(HCkXml cHandle, const char *pathCmd);
CK_VISIBLE_PUBLIC void CkXml_Clear(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_ContentMatches(HCkXml cHandle, const char *pattern, BOOL caseSensitive);
CK_VISIBLE_PUBLIC void CkXml_Copy(HCkXml cHandle, HCkXml node);
CK_VISIBLE_PUBLIC void CkXml_CopyRef(HCkXml cHandle, HCkXml copyFromNode);
CK_VISIBLE_PUBLIC BOOL CkXml_DecodeContent(HCkXml cHandle, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkXml_DecodeEntities(HCkXml cHandle, const char *str, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_decodeEntities(HCkXml cHandle, const char *str);
CK_VISIBLE_PUBLIC BOOL CkXml_DecryptContent(HCkXml cHandle, const char *password);
CK_VISIBLE_PUBLIC BOOL CkXml_EncryptContent(HCkXml cHandle, const char *password);
CK_VISIBLE_PUBLIC HCkXml CkXml_ExtractChildByIndex(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC HCkXml CkXml_ExtractChildByName(HCkXml cHandle, const char *tag, const char *attrName, const char *attrValue);
CK_VISIBLE_PUBLIC HCkXml CkXml_FindChild(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_FindChild2(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC HCkXml CkXml_FindNextRecord(HCkXml cHandle, const char *tag, const char *contentPattern);
CK_VISIBLE_PUBLIC HCkXml CkXml_FindOrAddNewChild(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC HCkXml CkXml_FirstChild(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_FirstChild2(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_GetAttributeName(HCkXml cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getAttributeName(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkXml_GetAttributeValue(HCkXml cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getAttributeValue(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC int CkXml_GetAttributeValueInt(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkXml_GetAttrValue(HCkXml cHandle, const char *name, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getAttrValue(HCkXml cHandle, const char *name);
CK_VISIBLE_PUBLIC int CkXml_GetAttrValueInt(HCkXml cHandle, const char *name);
CK_VISIBLE_PUBLIC BOOL CkXml_GetBinaryContent(HCkXml cHandle, BOOL unzipFlag, BOOL decryptFlag, const char *password, HCkByteData outData);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetChild(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkXml_GetChild2(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkXml_GetChildBoolValue(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_GetChildContent(HCkXml cHandle, const char *tag, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getChildContent(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_GetChildContentByIndex(HCkXml cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getChildContentByIndex(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetChildExact(HCkXml cHandle, const char *tag, const char *content);
CK_VISIBLE_PUBLIC int CkXml_GetChildIntValue(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_GetChildTag(HCkXml cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getChildTag(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkXml_GetChildTagByIndex(HCkXml cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getChildTagByIndex(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetChildWithAttr(HCkXml cHandle, const char *tag, const char *attrName, const char *attrValue);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetChildWithContent(HCkXml cHandle, const char *content);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetChildWithTag(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetNthChildWithTag(HCkXml cHandle, const char *tag, int n);
CK_VISIBLE_PUBLIC BOOL CkXml_GetNthChildWithTag2(HCkXml cHandle, const char *tag, int n);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetParent(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_GetParent2(HCkXml cHandle);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetRoot(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_GetRoot2(HCkXml cHandle);
CK_VISIBLE_PUBLIC HCkXml CkXml_GetSelf(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_GetXml(HCkXml cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_getXml(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_HasAttribute(HCkXml cHandle, const char *name);
CK_VISIBLE_PUBLIC BOOL CkXml_HasAttrWithValue(HCkXml cHandle, const char *name, const char *value);
CK_VISIBLE_PUBLIC BOOL CkXml_HasChildWithContent(HCkXml cHandle, const char *content);
CK_VISIBLE_PUBLIC BOOL CkXml_HasChildWithTag(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_HasChildWithTagAndContent(HCkXml cHandle, const char *tag, const char *content);
CK_VISIBLE_PUBLIC void CkXml_InsertChildTreeAfter(HCkXml cHandle, int index, HCkXml tree);
CK_VISIBLE_PUBLIC void CkXml_InsertChildTreeBefore(HCkXml cHandle, int index, HCkXml tree);
CK_VISIBLE_PUBLIC HCkXml CkXml_LastChild(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_LastChild2(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_LoadXml(HCkXml cHandle, const char *xmlData);
CK_VISIBLE_PUBLIC BOOL CkXml_LoadXml2(HCkXml cHandle, const char *xmlData, BOOL autoTrim);
CK_VISIBLE_PUBLIC BOOL CkXml_LoadXmlFile(HCkXml cHandle, const char *fileName);
CK_VISIBLE_PUBLIC BOOL CkXml_LoadXmlFile2(HCkXml cHandle, const char *fileName, BOOL autoTrim);
CK_VISIBLE_PUBLIC HCkXml CkXml_NewChild(HCkXml cHandle, const char *tag, const char *content);
CK_VISIBLE_PUBLIC void CkXml_NewChild2(HCkXml cHandle, const char *tag, const char *content);
CK_VISIBLE_PUBLIC HCkXml CkXml_NewChildAfter(HCkXml cHandle, int index, const char *tag, const char *content);
CK_VISIBLE_PUBLIC HCkXml CkXml_NewChildBefore(HCkXml cHandle, int index, const char *tag, const char *content);
CK_VISIBLE_PUBLIC void CkXml_NewChildInt2(HCkXml cHandle, const char *tag, int value);
CK_VISIBLE_PUBLIC HCkXml CkXml_NextSibling(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_NextSibling2(HCkXml cHandle);
CK_VISIBLE_PUBLIC int CkXml_NumChildrenHavingTag(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC HCkXml CkXml_PreviousSibling(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_PreviousSibling2(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_QEncodeContent(HCkXml cHandle, const char *charset, HCkByteData inData);
CK_VISIBLE_PUBLIC BOOL CkXml_RemoveAllAttributes(HCkXml cHandle);
CK_VISIBLE_PUBLIC void CkXml_RemoveAllChildren(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_RemoveAttribute(HCkXml cHandle, const char *name);
CK_VISIBLE_PUBLIC void CkXml_RemoveChild(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC void CkXml_RemoveChildByIndex(HCkXml cHandle, int index);
CK_VISIBLE_PUBLIC void CkXml_RemoveChildWithContent(HCkXml cHandle, const char *content);
CK_VISIBLE_PUBLIC void CkXml_RemoveFromTree(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_SaveBinaryContent(HCkXml cHandle, const char *filename, BOOL unzipFlag, BOOL decryptFlag, const char *password);
CK_VISIBLE_PUBLIC BOOL CkXml_SaveLastError(HCkXml cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkXml_SaveXml(HCkXml cHandle, const char *fileName);
CK_VISIBLE_PUBLIC HCkXml CkXml_SearchAllForContent(HCkXml cHandle, HCkXml afterPtr, const char *contentPattern);
CK_VISIBLE_PUBLIC BOOL CkXml_SearchAllForContent2(HCkXml cHandle, HCkXml afterPtr, const char *contentPattern);
CK_VISIBLE_PUBLIC HCkXml CkXml_SearchForAttribute(HCkXml cHandle, HCkXml afterPtr, const char *tag, const char *attr, const char *valuePattern);
CK_VISIBLE_PUBLIC BOOL CkXml_SearchForAttribute2(HCkXml cHandle, HCkXml afterPtr, const char *tag, const char *attr, const char *valuePattern);
CK_VISIBLE_PUBLIC HCkXml CkXml_SearchForContent(HCkXml cHandle, HCkXml afterPtr, const char *tag, const char *contentPattern);
CK_VISIBLE_PUBLIC BOOL CkXml_SearchForContent2(HCkXml cHandle, HCkXml afterPtr, const char *tag, const char *contentPattern);
CK_VISIBLE_PUBLIC HCkXml CkXml_SearchForTag(HCkXml cHandle, HCkXml afterPtr, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_SearchForTag2(HCkXml cHandle, HCkXml afterPtr, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_SetBinaryContent(HCkXml cHandle, HCkByteData inData, BOOL zipFlag, BOOL encryptFlag, const char *password);
#if !defined(CHILKAT_MONO)
CK_VISIBLE_PUBLIC BOOL CkXml_SetBinaryContent2(HCkXml cHandle, const unsigned char *pByteData, unsigned long szByteData, BOOL zipFlag, BOOL encryptFlag, const char *password);
#endif
CK_VISIBLE_PUBLIC BOOL CkXml_SetBinaryContentFromFile(HCkXml cHandle, const char *filename, BOOL zipFlag, BOOL encryptFlag, const char *password);
CK_VISIBLE_PUBLIC void CkXml_SortByAttribute(HCkXml cHandle, const char *attrName, BOOL ascending);
CK_VISIBLE_PUBLIC void CkXml_SortByAttributeInt(HCkXml cHandle, const char *attrName, BOOL ascending);
CK_VISIBLE_PUBLIC void CkXml_SortByContent(HCkXml cHandle, BOOL ascending);
CK_VISIBLE_PUBLIC void CkXml_SortByTag(HCkXml cHandle, BOOL ascending);
CK_VISIBLE_PUBLIC void CkXml_SortRecordsByAttribute(HCkXml cHandle, const char *sortTag, const char *attrName, BOOL ascending);
CK_VISIBLE_PUBLIC void CkXml_SortRecordsByContent(HCkXml cHandle, const char *sortTag, BOOL ascending);
CK_VISIBLE_PUBLIC void CkXml_SortRecordsByContentInt(HCkXml cHandle, const char *sortTag, BOOL ascending);
CK_VISIBLE_PUBLIC BOOL CkXml_SwapNode(HCkXml cHandle, HCkXml node);
CK_VISIBLE_PUBLIC BOOL CkXml_SwapTree(HCkXml cHandle, HCkXml tree);
CK_VISIBLE_PUBLIC BOOL CkXml_TagContent(HCkXml cHandle, const char *tagName, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXml_tagContent(HCkXml cHandle, const char *tagName);
CK_VISIBLE_PUBLIC BOOL CkXml_TagEquals(HCkXml cHandle, const char *tag);
CK_VISIBLE_PUBLIC BOOL CkXml_UnzipContent(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_UnzipTree(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_UpdateAttribute(HCkXml cHandle, const char *attrName, const char *attrValue);
CK_VISIBLE_PUBLIC BOOL CkXml_UpdateAttributeInt(HCkXml cHandle, const char *attrName, int value);
CK_VISIBLE_PUBLIC void CkXml_UpdateChildContent(HCkXml cHandle, const char *tag, const char *value);
CK_VISIBLE_PUBLIC void CkXml_UpdateChildContentInt(HCkXml cHandle, const char *tag, int value);
CK_VISIBLE_PUBLIC BOOL CkXml_ZipContent(HCkXml cHandle);
CK_VISIBLE_PUBLIC BOOL CkXml_ZipTree(HCkXml cHandle);
#endif
