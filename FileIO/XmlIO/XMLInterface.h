/**
 * \file
 * \author Karsten Rink
 * \date   2010-02-18
 * \brief  Definition of the XMLInterface class.
 *
 * \copyright
 * Copyright (c) 2013, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#ifndef XMLINTERFACE_H
#define XMLINTERFACE_H

#include "OGS/ProjectData.h"

#include "Writer.h"

namespace FileIO
{
/**
 * \brief Base class for writing any information to and from XML files.
 */
class XMLInterface : public Writer
{
public:
	XMLInterface();
	virtual ~XMLInterface() {}

	void setNameForExport(std::string const& name) { _exportName = name; }
	virtual bool readFile(std::string const& fname) = 0;

protected:
	std::string _exportName;
};

}

#endif // XMLINTERFACE_H
