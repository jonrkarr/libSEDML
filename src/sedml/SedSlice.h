/**
 * @file SedSlice.h
 * @brief Definition of the SedSlice class.
 * @author DEVISER
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSEDML. Please visit http://sed-ml.org for more
 * information about SED-ML. The latest version of libSEDML can be found on
 * github: https://github.com/fbergmann/libSEDML/
 * 

 * Copyright (c) 2013-2019, Frank T. Bergmann
 * All rights reserved.
 * 

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 

 * 1. Redistributions of source code must retain the above copyright notice,
 * this
 * list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation. A copy of the license agreement is provided in the
 * file named "LICENSE.txt" included with this software distribution and also
 * available online as http://sbml.org/software/libsbml/license.html
 * ------------------------------------------------------------------------ -->
 *
 * @class SedSlice
 * @sbmlbrief{sedml} TODO:Definition of the SedSlice class.
 */


#ifndef SedSlice_H__
#define SedSlice_H__


#include <sedml/common/extern.h>
#include <sedml/common/sedmlfwd.h>


#ifdef __cplusplus


#include <string>


#include <sedml/SedBase.h>
#include <sbml/common/libsbml-namespace.h>


LIBSEDML_CPP_NAMESPACE_BEGIN


class LIBSEDML_EXTERN SedSlice : public SedBase
{
protected:

  /** @cond doxygenLibSEDMLInternal */

  std::string mReference;
  std::string mValue;
  std::string mIndex;
  int mStartIndex;
  bool mIsSetStartIndex;
  int mEndIndex;
  bool mIsSetEndIndex;

  /** @endcond */

public:

  /**
   * Creates a new SedSlice using the given SEDML Level and @ p version values.
   *
   * @param level an unsigned int, the SEDML Level to assign to this SedSlice.
   *
   * @param version an unsigned int, the SEDML Version to assign to this
   * SedSlice.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  SedSlice(unsigned int level = SEDML_DEFAULT_LEVEL,
           unsigned int version = SEDML_DEFAULT_VERSION);


  /**
   * Creates a new SedSlice using the given SedNamespaces object @p sedmlns.
   *
   * @param sedmlns the SedNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  SedSlice(SedNamespaces *sedmlns);


  /**
   * Copy constructor for SedSlice.
   *
   * @param orig the SedSlice instance to copy.
   */
  SedSlice(const SedSlice& orig);


  /**
   * Assignment operator for SedSlice.
   *
   * @param rhs the SedSlice object whose values are to be used as the basis of
   * the assignment.
   */
  SedSlice& operator=(const SedSlice& rhs);


  /**
   * Creates and returns a deep copy of this SedSlice object.
   *
   * @return a (deep) copy of this SedSlice object.
   */
  virtual SedSlice* clone() const;


  /**
   * Destructor for SedSlice.
   */
  virtual ~SedSlice();


  /**
   * Returns the value of the "reference" attribute of this SedSlice.
   *
   * @return the value of the "reference" attribute of this SedSlice as a
   * string.
   */
  const std::string& getReference() const;


  /**
   * Returns the value of the "value" attribute of this SedSlice.
   *
   * @return the value of the "value" attribute of this SedSlice as a string.
   */
  const std::string& getValue() const;


  /**
   * Returns the value of the "index" attribute of this SedSlice.
   *
   * @return the value of the "index" attribute of this SedSlice as a string.
   */
  const std::string& getIndex() const;


  /**
   * Returns the value of the "startIndex" attribute of this SedSlice.
   *
   * @return the value of the "startIndex" attribute of this SedSlice as a
   * integer.
   */
  int getStartIndex() const;


  /**
   * Returns the value of the "endIndex" attribute of this SedSlice.
   *
   * @return the value of the "endIndex" attribute of this SedSlice as a
   * integer.
   */
  int getEndIndex() const;


  /**
   * Predicate returning @c true if this SedSlice's "reference" attribute is
   * set.
   *
   * @return @c true if this SedSlice's "reference" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetReference() const;


  /**
   * Predicate returning @c true if this SedSlice's "value" attribute is set.
   *
   * @return @c true if this SedSlice's "value" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetValue() const;


  /**
   * Predicate returning @c true if this SedSlice's "index" attribute is set.
   *
   * @return @c true if this SedSlice's "index" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetIndex() const;


  /**
   * Predicate returning @c true if this SedSlice's "startIndex" attribute is
   * set.
   *
   * @return @c true if this SedSlice's "startIndex" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetStartIndex() const;


  /**
   * Predicate returning @c true if this SedSlice's "endIndex" attribute is
   * set.
   *
   * @return @c true if this SedSlice's "endIndex" attribute has been set,
   * otherwise @c false is returned.
   */
  bool isSetEndIndex() const;


  /**
   * Sets the value of the "reference" attribute of this SedSlice.
   *
   * @param reference std::string& value of the "reference" attribute to be
   * set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setReference(const std::string& reference);


  /**
   * Sets the value of the "value" attribute of this SedSlice.
   *
   * @param value std::string& value of the "value" attribute to be set.
   *
   * @copydetails doc_returns_one_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   *
   * Calling this function with @p value = @c NULL or an empty string is
   * equivalent to calling unsetValue().
   */
  int setValue(const std::string& value);


  /**
   * Sets the value of the "index" attribute of this SedSlice.
   *
   * @param index std::string& value of the "index" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setIndex(const std::string& index);


  /**
   * Sets the value of the "startIndex" attribute of this SedSlice.
   *
   * @param startIndex int value of the "startIndex" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setStartIndex(int startIndex);


  /**
   * Sets the value of the "endIndex" attribute of this SedSlice.
   *
   * @param endIndex int value of the "endIndex" attribute to be set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
   * OperationReturnValues_t}
   */
  int setEndIndex(int endIndex);


  /**
   * Unsets the value of the "reference" attribute of this SedSlice.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetReference();


  /**
   * Unsets the value of the "value" attribute of this SedSlice.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetValue();


  /**
   * Unsets the value of the "index" attribute of this SedSlice.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetIndex();


  /**
   * Unsets the value of the "startIndex" attribute of this SedSlice.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetStartIndex();


  /**
   * Unsets the value of the "endIndex" attribute of this SedSlice.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  int unsetEndIndex();


  /**
   * @copydoc doc_renamesidref_common
   */
  virtual void renameSIdRefs(const std::string& oldid,
                             const std::string& newid);


  /**
   * Returns the XML element name of this SedSlice object.
   *
   * For SedSlice, the XML element name is always @c "slice".
   *
   * @return the name of this element, i.e. @c "slice".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSEDML type code for this SedSlice object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SEDML type code for this object:
   * @sedmlconstant{SEDML_DATA_SLICE, SedTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   */
  virtual int getTypeCode() const;


  /**
   * Predicate returning @c true if all the required attributes for this
   * SedSlice object have been set.
   *
   * @return @c true to indicate that all the required attributes of this
   * SedSlice have been set, otherwise @c false is returned.
   *
   *
   * @note The required attributes for the SedSlice object are:
   * @li "reference"
   * @li "value"
   */
  virtual bool hasRequiredAttributes() const;



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Write any contained elements
   */
  virtual void writeElements(LIBSBML_CPP_NAMESPACE_QUALIFIER XMLOutputStream&
    stream) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Accepts the given SedVisitor
   */
  virtual bool accept(SedVisitor& v) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the parent SedDocument
   */
  virtual void setSedDocument(SedDocument* d);

  /** @endcond */




  #ifndef SWIG



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, bool& value)
    const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName, int& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           double& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           unsigned int& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Gets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to retrieve.
   *
   * @param value, the address of the value to record.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int getAttribute(const std::string& attributeName,
                           std::string& value) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Predicate returning @c true if this SedSlice's attribute "attributeName"
   * is set.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @return @c true if this SedSlice's attribute "attributeName" has been set,
   * otherwise @c false is returned.
   */
  virtual bool isSetAttribute(const std::string& attributeName) const;

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, bool value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, int value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName, double value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           unsigned int value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Sets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to set.
   *
   * @param value, the value of the attribute to set.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int setAttribute(const std::string& attributeName,
                           const std::string& value);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Unsets the value of the "attributeName" attribute of this SedSlice.
   *
   * @param attributeName, the name of the attribute to query.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   */
  virtual int unsetAttribute(const std::string& attributeName);

  /** @endcond */




  #endif /* !SWIG */


protected:


  /** @cond doxygenLibSEDMLInternal */

  /**
   * Adds the expected attributes for this element
   */
  virtual void addExpectedAttributes(LIBSBML_CPP_NAMESPACE_QUALIFIER
    ExpectedAttributes& attributes);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Reads the expected attributes into the member data variables
   */
  virtual void readAttributes(
                              const LIBSBML_CPP_NAMESPACE_QUALIFIER
                                XMLAttributes& attributes,
                              const LIBSBML_CPP_NAMESPACE_QUALIFIER
                                ExpectedAttributes& expectedAttributes);

  /** @endcond */



  /** @cond doxygenLibSEDMLInternal */

  /**
   * Writes the attributes to the stream
   */
  virtual void writeAttributes(LIBSBML_CPP_NAMESPACE_QUALIFIER XMLOutputStream&
    stream) const;

  /** @endcond */


};



LIBSEDML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSEDML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Creates a new SedSlice_t using the given SEDML Level and @ p version values.
 *
 * @param level an unsigned int, the SEDML Level to assign to this SedSlice_t.
 *
 * @param version an unsigned int, the SEDML Version to assign to this
 * SedSlice_t.
 *
 * @copydetails doc_note_setting_lv_pkg
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
SedSlice_t *
SedSlice_create(unsigned int level, unsigned int version);


/**
 * Creates and returns a deep copy of this SedSlice_t object.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return a (deep) copy of this SedSlice_t object.
 *
 * @copydetails doc_returned_owned_pointer
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
SedSlice_t*
SedSlice_clone(const SedSlice_t* ss);


/**
 * Frees this SedSlice_t object.
 *
 * @param ss the SedSlice_t structure.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
void
SedSlice_free(SedSlice_t* ss);


/**
 * Returns the value of the "reference" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure whose reference is sought.
 *
 * @return the value of the "reference" attribute of this SedSlice_t as a
 * pointer to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
char *
SedSlice_getReference(const SedSlice_t * ss);


/**
 * Returns the value of the "value" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure whose value is sought.
 *
 * @return the value of the "value" attribute of this SedSlice_t as a pointer
 * to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
char *
SedSlice_getValue(const SedSlice_t * ss);


/**
 * Returns the value of the "index" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure whose index is sought.
 *
 * @return the value of the "index" attribute of this SedSlice_t as a pointer
 * to a string.
 *
 * @copydetails doc_returned_owned_char
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
char *
SedSlice_getIndex(const SedSlice_t * ss);


/**
 * Returns the value of the "startIndex" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure whose startIndex is sought.
 *
 * @return the value of the "startIndex" attribute of this SedSlice_t as a
 * integer.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_getStartIndex(const SedSlice_t * ss);


/**
 * Returns the value of the "endIndex" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure whose endIndex is sought.
 *
 * @return the value of the "endIndex" attribute of this SedSlice_t as a
 * integer.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_getEndIndex(const SedSlice_t * ss);


/**
 * Predicate returning @c 1 (true) if this SedSlice_t's "reference" attribute
 * is set.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return @c 1 (true) if this SedSlice_t's "reference" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_isSetReference(const SedSlice_t * ss);


/**
 * Predicate returning @c 1 (true) if this SedSlice_t's "value" attribute is
 * set.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return @c 1 (true) if this SedSlice_t's "value" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_isSetValue(const SedSlice_t * ss);


/**
 * Predicate returning @c 1 (true) if this SedSlice_t's "index" attribute is
 * set.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return @c 1 (true) if this SedSlice_t's "index" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_isSetIndex(const SedSlice_t * ss);


/**
 * Predicate returning @c 1 (true) if this SedSlice_t's "startIndex" attribute
 * is set.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return @c 1 (true) if this SedSlice_t's "startIndex" attribute has been
 * set, otherwise @c 0 (false) is returned.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_isSetStartIndex(const SedSlice_t * ss);


/**
 * Predicate returning @c 1 (true) if this SedSlice_t's "endIndex" attribute is
 * set.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return @c 1 (true) if this SedSlice_t's "endIndex" attribute has been set,
 * otherwise @c 0 (false) is returned.
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_isSetEndIndex(const SedSlice_t * ss);


/**
 * Sets the value of the "reference" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @param reference const char * value of the "reference" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
 * OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_setReference(SedSlice_t * ss, const char * reference);


/**
 * Sets the value of the "value" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @param value const char * value of the "value" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * Calling this function with @p value = @c NULL or an empty string is
 * equivalent to calling SedSlice_unsetValue().
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_setValue(SedSlice_t * ss, const char * value);


/**
 * Sets the value of the "index" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @param index const char * value of the "index" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
 * OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_setIndex(SedSlice_t * ss, const char * index);


/**
 * Sets the value of the "startIndex" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @param startIndex int value of the "startIndex" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
 * OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_setStartIndex(SedSlice_t * ss, int startIndex);


/**
 * Sets the value of the "endIndex" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @param endIndex int value of the "endIndex" attribute to be set.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_ATTRIBUTE_VALUE,
 * OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_setEndIndex(SedSlice_t * ss, int endIndex);


/**
 * Unsets the value of the "reference" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_unsetReference(SedSlice_t * ss);


/**
 * Unsets the value of the "value" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_unsetValue(SedSlice_t * ss);


/**
 * Unsets the value of the "index" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_unsetIndex(SedSlice_t * ss);


/**
 * Unsets the value of the "startIndex" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_unsetStartIndex(SedSlice_t * ss);


/**
 * Unsets the value of the "endIndex" attribute of this SedSlice_t.
 *
 * @param ss the SedSlice_t structure.
 *
 * @copydetails doc_returns_success_code
 * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
 * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_unsetEndIndex(SedSlice_t * ss);


/**
 * Predicate returning @c 1 (true) if all the required attributes for this
 * SedSlice_t object have been set.
 *
 * @param ss the SedSlice_t structure.
 *
 * @return @c 1 (true) to indicate that all the required attributes of this
 * SedSlice_t have been set, otherwise @c 0 (false) is returned.
 *
 *
 * @note The required attributes for the SedSlice_t object are:
 * @li "reference"
 * @li "value"
 *
 * @memberof SedSlice_t
 */
LIBSEDML_EXTERN
int
SedSlice_hasRequiredAttributes(const SedSlice_t * ss);




END_C_DECLS




LIBSEDML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !SedSlice_H__ */


