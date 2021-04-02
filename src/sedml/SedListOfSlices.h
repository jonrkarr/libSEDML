/**
 * @file SedListOfSlices.h
 * @brief Definition of the SedListOfSlices class.
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
 * @class SedListOfSlices
 * @sbmlbrief{sedml} TODO:Definition of the SedListOfSlices class.
 */


#ifndef SedListOfSlices_H__
#define SedListOfSlices_H__


#include <sedml/common/extern.h>
#include <sedml/common/sedmlfwd.h>


#ifdef __cplusplus


#include <string>


#include <sedml/SedListOf.h>
#include <sedml/SedSlice.h>
#include <sbml/common/libsbml-namespace.h>


LIBSEDML_CPP_NAMESPACE_BEGIN


class LIBSEDML_EXTERN SedListOfSlices : public SedListOf
{

public:

  /**
   * Creates a new SedListOfSlices using the given SED-ML Level and @ p version
   * values.
   *
   * @param level an unsigned int, the SED-ML Level to assign to this
   * SedListOfSlices.
   *
   * @param version an unsigned int, the SED-ML Version to assign to this
   * SedListOfSlices.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  SedListOfSlices(unsigned int level = SEDML_DEFAULT_LEVEL,
                  unsigned int version = SEDML_DEFAULT_VERSION);


  /**
   * Creates a new SedListOfSlices using the given SedNamespaces object @p
   * sedmlns.
   *
   * @param sedmlns the SedNamespaces object.
   *
   * @copydetails doc_note_setting_lv_pkg
   */
  SedListOfSlices(SedNamespaces *sedmlns);


  /**
   * Copy constructor for SedListOfSlices.
   *
   * @param orig the SedListOfSlices instance to copy.
   */
  SedListOfSlices(const SedListOfSlices& orig);


  /**
   * Assignment operator for SedListOfSlices.
   *
   * @param rhs the SedListOfSlices object whose values are to be used as the
   * basis of the assignment.
   */
  SedListOfSlices& operator=(const SedListOfSlices& rhs);


  /**
   * Creates and returns a deep copy of this SedListOfSlices object.
   *
   * @return a (deep) copy of this SedListOfSlices object.
   */
  virtual SedListOfSlices* clone() const;


  /**
   * Destructor for SedListOfSlices.
   */
  virtual ~SedListOfSlices();


  /**
   * Get a SedSlice from the SedListOfSlices.
   *
   * @param n an unsigned int representing the index of the SedSlice to
   * retrieve.
   *
   * @return the nth SedSlice in this SedListOfSlices or @c NULL if no such
   * object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(const std::string& sid)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual SedSlice* get(unsigned int n);


  /**
   * Get a SedSlice from the SedListOfSlices.
   *
   * @param n an unsigned int representing the index of the SedSlice to
   * retrieve.
   *
   * @return the nth SedSlice in this SedListOfSlices or @c NULL if no such
   * object exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(const std::string& sid)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual const SedSlice* get(unsigned int n) const;


  /**
   * Get a SedSlice from the SedListOfSlices based on its identifier.
   *
   * @param sid a string representing the identifier of the SedSlice to
   * retrieve.
   *
   * @return the SedSlice in this SedListOfSlices with the given @p sid or
   * @c NULL if no such SedSlice exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(unsigned int n)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual SedSlice* get(const std::string& sid);


  /**
   * Get a SedSlice from the SedListOfSlices based on its identifier.
   *
   * @param sid a string representing the identifier of the SedSlice to
   * retrieve.
   *
   * @return the SedSlice in this SedListOfSlices with the given @p sid or
   * @c NULL if no such SedSlice exists.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(unsigned int n)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  virtual const SedSlice* get(const std::string& sid) const;


  /**
   * Removes the nth SedSlice from this SedListOfSlices and returns a pointer
   * to it.
   *
   * @param n an unsigned int representing the index of the SedSlice to remove.
   *
   * @return a pointer to the nth SedSlice in this SedListOfSlices.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   */
  virtual SedSlice* remove(unsigned int n);


  /**
   * Removes the SedSlice from this SedListOfSlices based on its identifier and
   * returns a pointer to it.
   *
   * @param sid a string representing the identifier of the SedSlice to remove.
   *
   * @return the SedSlice in this SedListOfSlices based on the identifier or
   * NULL if no such SedSlice exists.
   *
   * @copydetails doc_warning_returns_owned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumSlices()
   * @see remove(unsigned int n)
   */
  virtual SedSlice* remove(const std::string& sid);


  /**
   * Adds a copy of the given SedSlice to this SedListOfSlices.
   *
   * @param ss the SedSlice object to add.
   *
   * @copydetails doc_returns_success_code
   * @li @sedmlconstant{LIBSEDML_OPERATION_SUCCESS, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_OPERATION_FAILED, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_INVALID_OBJECT, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_LEVEL_MISMATCH, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_VERSION_MISMATCH, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_PKG_VERSION_MISMATCH, OperationReturnValues_t}
   * @li @sedmlconstant{LIBSEDML_DUPLICATE_OBJECT_ID, OperationReturnValues_t}
   *
   * @copydetails doc_note_object_is_copied
   *
   * @see createSlice()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  int addSlice(const SedSlice* ss);


  /**
   * Get the number of SedSlice objects in this SedListOfSlices.
   *
   * @return the number of SedSlice objects in this SedListOfSlices.
   *
   * @see addSlice(const SedSlice* object)
   * @see createSlice()
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  unsigned int getNumSlices() const;


  /**
   * Creates a new SedSlice object, adds it to this SedListOfSlices object and
   * returns the SedSlice object created.
   *
   * @return a new SedSlice object instance.
   *
   * @copydetails doc_returned_unowned_pointer
   *
   * @see addSlice(const SedSlice* object)
   * @see get(const std::string& sid)
   * @see get(unsigned int n)
   * @see getNumSlices()
   * @see remove(const std::string& sid)
   * @see remove(unsigned int n)
   */
  SedSlice* createSlice();


  /**
   * Get a SedSlice from the SedListOfSlices based on the Reference to which it
   * refers.
   *
   * @param sid a string representing the "reference" attribute of the SedSlice
   * object to retrieve.
   *
   * @return the first SedSlice in this SedListOfSlices based on the given
   * reference attribute or NULL if no such SedSlice exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  const SedSlice* getByReference(const std::string& sid) const;


  /**
   * Get a SedSlice from the SedListOfSlices based on the Reference to which it
   * refers.
   *
   * @param sid a string representing the "reference" attribute of the SedSlice
   * object to retrieve.
   *
   * @return the first SedSlice in this SedListOfSlices based on the given
   * reference attribute or NULL if no such SedSlice exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  SedSlice* getByReference(const std::string& sid);


  /**
   * Get a SedSlice from the SedListOfSlices based on the Index to which it
   * refers.
   *
   * @param sid a string representing the "index" attribute of the SedSlice
   * object to retrieve.
   *
   * @return the first SedSlice in this SedListOfSlices based on the given
   * index attribute or NULL if no such SedSlice exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  const SedSlice* getByIndex(const std::string& sid) const;


  /**
   * Get a SedSlice from the SedListOfSlices based on the Index to which it
   * refers.
   *
   * @param sid a string representing the "index" attribute of the SedSlice
   * object to retrieve.
   *
   * @return the first SedSlice in this SedListOfSlices based on the given
   * index attribute or NULL if no such SedSlice exists.
   *
   * @copydetails doc_returned_unowned_pointer
   */
  SedSlice* getByIndex(const std::string& sid);


  /**
   * Returns the XML element name of this SedListOfSlices object.
   *
   * For SedListOfSlices, the XML element name is always @c "listOfSlices".
   *
   * @return the name of this element, i.e. @c "listOfSlices".
   */
  virtual const std::string& getElementName() const;


  /**
   * Returns the libSEDML type code for this SedListOfSlices object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SED-ML type code for this object:
   * @sedmlconstant{SEDML_LIST_OF, SedTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   */
  virtual int getTypeCode() const;


  /**
   * Returns the libSEDML type code for the SED-ML objects contained in this
   * SedListOfSlices object.
   *
   * @copydetails doc_what_are_typecodes
   *
   * @return the SED-ML typecode for the objects contained in this
   * SedListOfSlices:
   * @sedmlconstant{SEDML_DATA_SLICE, SedTypeCode_t}.
   *
   * @copydetails doc_warning_typecodes_not_unique
   *
   * @see getElementName()
   */
  virtual int getItemTypeCode() const;




  #ifndef SWIG




  #endif /* !SWIG */


protected:


  /** @cond doxygenLibSEDMLInternal */

  /**
   * Creates a new SedSlice in this SedListOfSlices
   */
  virtual SedBase* createObject(LIBSBML_CPP_NAMESPACE_QUALIFIER XMLInputStream&
    stream);

  /** @endcond */


};



LIBSEDML_CPP_NAMESPACE_END




#endif /* __cplusplus */




#ifndef SWIG




LIBSEDML_CPP_NAMESPACE_BEGIN




BEGIN_C_DECLS


/**
 * Get a SedSlice_t from the SedListOf_t.
 *
 * @param slo the SedListOf_t structure to search.
 *
 * @param n an unsigned int representing the index of the SedSlice_t to
 * retrieve.
 *
 * @return the nth SedSlice_t in this SedListOf_t or @c NULL if no such object
 * exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof SedListOfSlices_t
 */
LIBSEDML_EXTERN
SedSlice_t*
SedListOfSlices_getSlice(SedListOf_t* slo, unsigned int n);


/**
 * Get a SedSlice_t from the SedListOf_t based on its identifier.
 *
 * @param slo the SedListOf_t structure to search.
 *
 * @param sid a string representing the identifier of the SedSlice_t to
 * retrieve.
 *
 * @return the SedSlice_t in this SedListOf_t with the given @p sid or @c NULL
 * if no such SedSlice_t exists.
 *
 * @copydetails doc_returned_unowned_pointer
 *
 * @memberof SedListOfSlices_t
 */
LIBSEDML_EXTERN
SedSlice_t*
SedListOfSlices_getById(SedListOf_t* slo, const char *sid);


/**
 * Removes the nth SedSlice_t from this SedListOf_t and returns a pointer to
 * it.
 *
 * @param slo the SedListOf_t structure to search.
 *
 * @param n an unsigned int representing the index of the SedSlice_t to remove.
 *
 * @return a pointer to the nth SedSlice_t in this SedListOf_t.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof SedListOfSlices_t
 */
LIBSEDML_EXTERN
SedSlice_t*
SedListOfSlices_remove(SedListOf_t* slo, unsigned int n);


/**
 * Removes the SedSlice_t from this SedListOf_t based on its identifier and
 * returns a pointer to it.
 *
 * @param slo the SedListOf_t structure to search.
 *
 * @param sid a string representing the identifier of the SedSlice_t to remove.
 *
 * @return the SedSlice_t in this SedListOf_t based on the identifier or NULL
 * if no such SedSlice_t exists.
 *
 * @copydetails doc_warning_returns_owned_pointer
 *
 * @memberof SedListOfSlices_t
 */
LIBSEDML_EXTERN
SedSlice_t*
SedListOfSlices_removeById(SedListOf_t* slo, const char* sid);




END_C_DECLS




LIBSEDML_CPP_NAMESPACE_END




#endif /* !SWIG */




#endif /* !SedListOfSlices_H__ */


