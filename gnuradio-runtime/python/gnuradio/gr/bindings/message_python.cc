/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/message.h>

void bind_message(py::module& m)
{
    using message    = gr::message;


    py::class_<message,
        std::shared_ptr<message>>(m, "message")

        .def(py::init(&message::make),
           py::arg("type") = 0, 
           py::arg("arg1") = 0, 
           py::arg("arg2") = 0, 
           py::arg("length") = 0 
        )
        

        .def_static("make_from_string",&message::make_from_string,
            py::arg("s"), 
            py::arg("type") = 0, 
            py::arg("arg1") = 0, 
            py::arg("arg2") = 0 
        )
        .def("type",&message::type)
        .def("arg1",&message::arg1)
        .def("arg2",&message::arg2)
        .def("set_type",&message::set_type,
            py::arg("type") 
        )
        .def("set_arg1",&message::set_arg1,
            py::arg("arg1") 
        )
        .def("set_arg2",&message::set_arg2,
            py::arg("arg2") 
        )
        .def("msg",&message::msg)
        .def("length",&message::length)
        .def("to_string",&message::to_string)
        ;


    m.def("message_ncurrently_allocated",&gr::message_ncurrently_allocated);

    m.def("message_from_string",&message::make_from_string,
            py::arg("s"), 
            py::arg("type") = 0, 
            py::arg("arg1") = 0, 
            py::arg("arg2") = 0 
        );
} 
