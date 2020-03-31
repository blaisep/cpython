/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(_testmultiphase_StateAccessType_get_defining_module__doc__,
"get_defining_module($self, /)\n"
"--\n"
"\n"
"Return the module of the defining class.");

#define _TESTMULTIPHASE_STATEACCESSTYPE_GET_DEFINING_MODULE_METHODDEF    \
    {"get_defining_module", (PyCFunction)(void(*)(void))_testmultiphase_StateAccessType_get_defining_module, METH_METHOD|METH_VARARGS|METH_KEYWORDS, _testmultiphase_StateAccessType_get_defining_module__doc__},

static PyObject *
_testmultiphase_StateAccessType_get_defining_module_impl(StateAccessTypeObject *self,
                                                         PyTypeObject *cls);

static PyObject *
_testmultiphase_StateAccessType_get_defining_module(StateAccessTypeObject *self, PyTypeObject *cls, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;

    return_value = _testmultiphase_StateAccessType_get_defining_module_impl(self, cls);

    return return_value;
}

PyDoc_STRVAR(_testmultiphase_StateAccessType_increment_count__doc__,
"increment_count($self, /)\n"
"--\n"
"\n"
"Add 1 to the module-state counter.");

#define _TESTMULTIPHASE_STATEACCESSTYPE_INCREMENT_COUNT_METHODDEF    \
    {"increment_count", (PyCFunction)(void(*)(void))_testmultiphase_StateAccessType_increment_count, METH_METHOD|METH_VARARGS|METH_KEYWORDS, _testmultiphase_StateAccessType_increment_count__doc__},

static PyObject *
_testmultiphase_StateAccessType_increment_count_impl(StateAccessTypeObject *self,
                                                     PyTypeObject *cls);

static PyObject *
_testmultiphase_StateAccessType_increment_count(StateAccessTypeObject *self, PyTypeObject *cls, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;

    return_value = _testmultiphase_StateAccessType_increment_count_impl(self, cls);

    return return_value;
}

PyDoc_STRVAR(_testmultiphase_StateAccessType_get_count__doc__,
"get_count($self, /)\n"
"--\n"
"\n"
"Return the value of the module-state counter.");

#define _TESTMULTIPHASE_STATEACCESSTYPE_GET_COUNT_METHODDEF    \
    {"get_count", (PyCFunction)(void(*)(void))_testmultiphase_StateAccessType_get_count, METH_METHOD|METH_VARARGS|METH_KEYWORDS, _testmultiphase_StateAccessType_get_count__doc__},

static PyObject *
_testmultiphase_StateAccessType_get_count_impl(StateAccessTypeObject *self,
                                               PyTypeObject *cls);

static PyObject *
_testmultiphase_StateAccessType_get_count(StateAccessTypeObject *self, PyTypeObject *cls, PyObject *args, PyObject *kwargs)
{
    PyObject *return_value = NULL;

    return_value = _testmultiphase_StateAccessType_get_count_impl(self, cls);

    return return_value;
}
/*[clinic end generated code: output=36078a14bc22594f input=a9049054013a1b77]*/
