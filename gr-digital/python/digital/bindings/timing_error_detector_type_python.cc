/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(timing_error_detector_type.h) */
/* BINDTOOL_HEADER_FILE_HASH(94bedef67b67da638cc8a86d62591dbd)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/timing_error_detector_type.h>
// pydoc.h is automatically generated in the build directory
#include <timing_error_detector_type_pydoc.h>

void bind_timing_error_detector_type(py::module& m)
{


    py::enum_<::gr::digital::ted_type>(m, "ted_type")
        .value("TED_NONE", ::gr::digital::TED_NONE)                             // -1
        .value("TED_MUELLER_AND_MULLER", ::gr::digital::TED_MUELLER_AND_MULLER) // 0
        .value("TED_MOD_MUELLER_AND_MULLER",
               ::gr::digital::TED_MOD_MUELLER_AND_MULLER)             // 1
        .value("TED_ZERO_CROSSING", ::gr::digital::TED_ZERO_CROSSING) // 2
        .value("TED_GARDNER", ::gr::digital::TED_GARDNER)             // 4
        .value("TED_EARLY_LATE", ::gr::digital::TED_EARLY_LATE)       // 5
        .value("TED_DANDREA_AND_MENGALI_GEN_MSK",
               ::gr::digital::TED_DANDREA_AND_MENGALI_GEN_MSK)                        // 6
        .value("TED_SIGNAL_TIMES_SLOPE_ML", ::gr::digital::TED_SIGNAL_TIMES_SLOPE_ML) // 7
        .value("TED_SIGNUM_TIMES_SLOPE_ML", ::gr::digital::TED_SIGNUM_TIMES_SLOPE_ML) // 8
        .value("TED_MENGALI_AND_DANDREA_GMSK",
               ::gr::digital::TED_MENGALI_AND_DANDREA_GMSK) // 9
        .export_values();

    py::implicitly_convertible<int, ::gr::digital::ted_type>();
}
