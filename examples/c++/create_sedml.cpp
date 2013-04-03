/**
 * @file    create_sedml.cpp
 * @brief   cerates a SED-ML document.
 * @author  Frank T. Bergmann
 * 
 * <!--------------------------------------------------------------------------
 * This file is part of libSEDML.  Please visit http://sed-ml.org for more
 * information about SEDML, and the latest version of libSEDML.
 *
 * Copyright (c) 2013, Frank T. Bergmann  
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ------------------------------------------------------------------------ -->
 */


#include <iostream>
#include <sedml/SedMLTypes.h>
#include <sbml/math/FormulaParser.h>

using namespace std;
LIBSEDML_CPP_NAMESPACE_USE

int
main (int argc, char* argv[])
{
  if (argc != 2)
  {
    cout << endl << "Usage: create_sedml output-filename"
         << endl << endl;
    return 2;
  }

  // create the document
  SedMLDocument doc;
  doc.setLevel(1);
  doc.setVersion(1);
  
  // create a first model referencing an sbml file
  SedMLModel *model = doc.createSedMLModel();
  model->setId("model1");
  model->setSource("file.xml");
  model->setLanguage("urn:sedml:sbml");
  
  // create a second model modifying a variable of that other sbml file
  model = doc.createSedMLModel();
  model->setId("model2");
  model->setSource("model1");
  model->setLanguage("urn:sedml:sbml");
  
  // change a paramerter 'k' to 0.1
  ChangeAttribute change;
  change.setTarget("/sbml:sbml/sbml:model/sbml:listOfParameters/sbml:parameter[@id='k']/@value");
  change.setNewValue("0.1");  
  model->addChange(&change);

  // remove species 's1'
  RemoveXML remove;
  remove.setTarget("/sbml:sbml/sbml:model/sbml:listOfSpecies/sbml:species[@id='S1']");
  model->addChange(&remove);
  
  // now for something tricky we want to update the initialConcentration of 'S2' to be 
  // half what it was in the original model
  ComputeChange compute;
  compute.setTarget("/sbml:sbml/sbml:model/sbml:listOfSpecies/sbml:species[@id=&quot;S2&quot;]/@initialConcentration");
  SedMLVariable *variable = compute.createSedMLVariable();
  variable->setId("S2");
  variable->setModelReference("model1");
  variable->setTarget("/sbml:sbml/sbml:model/sbml:listOfSpecies/sbml:species[@id='S2']");
  compute.setMath(SBML_parseFormula("S2 / 2"));
  model->addChange(&compute);
  
  // write the document
  writeSedML(&doc, argv[1]);  

  return 0;
}
