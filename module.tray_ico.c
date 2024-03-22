/* Generated code for Python module 'tray_ico'
 * created by Nuitka version 2.0.3
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_tray_ico" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tray_ico;
PyDictObject *moduledict_tray_ico;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[186];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[186];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("tray_ico"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 186; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tray_ico(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 186; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f51c9d08dd0d2b506cc72402b99a0fd9;
static PyCodeObject *codeobj_8944baf59aee0b914cacc69a856da554;
static PyCodeObject *codeobj_d7230286e0fd868cdc6456be82af62cf;
static PyCodeObject *codeobj_65c5e9c1ebf721682e7948765e18872f;
static PyCodeObject *codeobj_ad3a21bcf2a94436cc6207a6706962f1;
static PyCodeObject *codeobj_c604a2f07d4162305afc30c9df147d29;
static PyCodeObject *codeobj_65b4811c5b8e5bfa62a47749e8ede1ed;
static PyCodeObject *codeobj_e6e6facf397f24ca40e0c927340aeb89;
static PyCodeObject *codeobj_97165c142357f212d740d4e7b8c82b10;
static PyCodeObject *codeobj_c0b038f86e5fc29ab08b303b1b1784ed;
static PyCodeObject *codeobj_0c3205af2d336610cd11b8470fc09493;
static PyCodeObject *codeobj_97ad20f748e90837d330cf9c0d3f9d03;
static PyCodeObject *codeobj_bd293bef960088295314f18f632283f0;
static PyCodeObject *codeobj_53a9a748ab2517e71d592c1fb72feab4;
static PyCodeObject *codeobj_bda717bcf9f0144303333174beebca30;
static PyCodeObject *codeobj_6b5a38954e16ca4ede940d91cbd98ee1;
static PyCodeObject *codeobj_f4e9a51067722ce2e0c3e75ef3141f9d;
static PyCodeObject *codeobj_112c386ae922990dd72147d51bbc183d;
static PyCodeObject *codeobj_44febac1b16adbd6dc0cbbfafeda6d4c;
static PyCodeObject *codeobj_1e6d89a986fabe5bc3070dd8510d7c49;
static PyCodeObject *codeobj_6dc8340723a0a2a7e75390ee59d42ecb;
static PyCodeObject *codeobj_c5af2ad18b03d5ae7b4f7d1f356f50ec;
static PyCodeObject *codeobj_bc5fd05e31ecb77249ba0976ba5bf446;
static PyCodeObject *codeobj_bce61d1991e680e9b616b1ba343564a9;
static PyCodeObject *codeobj_afdb1391ac33d82aa82bf3685cbc469c;
static PyCodeObject *codeobj_953475fdae7fdccf89fc1e31513a1644;
static PyCodeObject *codeobj_e755036aac988235f0a91b514e4535a3;
static PyCodeObject *codeobj_be3ff7e5bec5c6bf128f9f047a613fb5;
static PyCodeObject *codeobj_567161564566d9f4344583713e3bc69b;
static PyCodeObject *codeobj_74cfca6e139ea5125e5b94a3be257254;
static PyCodeObject *codeobj_1b773383a472e2cca0d0541715530857;
static PyCodeObject *codeobj_142b6a373d02d4330bbf23c2a4f16e4b;
static PyCodeObject *codeobj_baba6cb60499f6b78ac61e0833f9b89e;
static PyCodeObject *codeobj_055590190ac07f5dee9af7e2aa6dffb4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[182]); CHECK_OBJECT(module_filename_obj);
    codeobj_f51c9d08dd0d2b506cc72402b99a0fd9 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_8944baf59aee0b914cacc69a856da554 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_d7230286e0fd868cdc6456be82af62cf = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_65c5e9c1ebf721682e7948765e18872f = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_ad3a21bcf2a94436cc6207a6706962f1 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_c604a2f07d4162305afc30c9df147d29 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_65b4811c5b8e5bfa62a47749e8ede1ed = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_e6e6facf397f24ca40e0c927340aeb89 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_97165c142357f212d740d4e7b8c82b10 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_c0b038f86e5fc29ab08b303b1b1784ed = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_0c3205af2d336610cd11b8470fc09493 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_97ad20f748e90837d330cf9c0d3f9d03 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_bd293bef960088295314f18f632283f0 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_53a9a748ab2517e71d592c1fb72feab4 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_bda717bcf9f0144303333174beebca30 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_6b5a38954e16ca4ede940d91cbd98ee1 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_f4e9a51067722ce2e0c3e75ef3141f9d = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_112c386ae922990dd72147d51bbc183d = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_44febac1b16adbd6dc0cbbfafeda6d4c = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_1e6d89a986fabe5bc3070dd8510d7c49 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_6dc8340723a0a2a7e75390ee59d42ecb = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_c5af2ad18b03d5ae7b4f7d1f356f50ec = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_bc5fd05e31ecb77249ba0976ba5bf446 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_bce61d1991e680e9b616b1ba343564a9 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_afdb1391ac33d82aa82bf3685cbc469c = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_953475fdae7fdccf89fc1e31513a1644 = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_e755036aac988235f0a91b514e4535a3 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_be3ff7e5bec5c6bf128f9f047a613fb5 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_567161564566d9f4344583713e3bc69b = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], mod_consts[183], NULL, 1, 0, 0);
    codeobj_74cfca6e139ea5125e5b94a3be257254 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[184], mod_consts[184], NULL, NULL, 0, 0, 0);
    codeobj_1b773383a472e2cca0d0541715530857 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[93], NULL, NULL, 0, 0, 0);
    codeobj_142b6a373d02d4330bbf23c2a4f16e4b = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], NULL, NULL, 0, 0, 0);
    codeobj_baba6cb60499f6b78ac61e0833f9b89e = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], NULL, NULL, 0, 0, 0);
    codeobj_055590190ac07f5dee9af7e2aa6dffb4 = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[179], mod_consts[179], mod_consts[185], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_tray_ico$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__12_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__13_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__14_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__15_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__16_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__17_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__1_exit_click();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__21_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__22_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__23_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__24_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__25_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__26_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__27_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__28_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__29_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__2_first_time_init();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__30_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__31_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__32_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__33_task_manager_click();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__3_reload_all_click();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_tray_ico$$$function__9_lambda();


// The module function definitions.
static PyObject *impl_tray_ico$$$function__1_exit_click(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1b773383a472e2cca0d0541715530857;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b773383a472e2cca0d0541715530857 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b773383a472e2cca0d0541715530857)) {
        Py_XDECREF(cache_frame_1b773383a472e2cca0d0541715530857);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b773383a472e2cca0d0541715530857 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b773383a472e2cca0d0541715530857 = MAKE_FUNCTION_FRAME(tstate, codeobj_1b773383a472e2cca0d0541715530857, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b773383a472e2cca0d0541715530857->m_type_description == NULL);
    frame_1b773383a472e2cca0d0541715530857 = cache_frame_1b773383a472e2cca0d0541715530857;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1b773383a472e2cca0d0541715530857);
    assert(Py_REFCNT(frame_1b773383a472e2cca0d0541715530857) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_1b773383a472e2cca0d0541715530857->m_frame.f_lineno = 65;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[1]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b773383a472e2cca0d0541715530857, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b773383a472e2cca0d0541715530857->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b773383a472e2cca0d0541715530857, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b773383a472e2cca0d0541715530857,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1b773383a472e2cca0d0541715530857 == cache_frame_1b773383a472e2cca0d0541715530857) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b773383a472e2cca0d0541715530857);
        cache_frame_1b773383a472e2cca0d0541715530857 = NULL;
    }

    assertFrameObject(frame_1b773383a472e2cca0d0541715530857);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_True;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__2_first_time_init(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_142b6a373d02d4330bbf23c2a4f16e4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_142b6a373d02d4330bbf23c2a4f16e4b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_142b6a373d02d4330bbf23c2a4f16e4b)) {
        Py_XDECREF(cache_frame_142b6a373d02d4330bbf23c2a4f16e4b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_142b6a373d02d4330bbf23c2a4f16e4b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_142b6a373d02d4330bbf23c2a4f16e4b = MAKE_FUNCTION_FRAME(tstate, codeobj_142b6a373d02d4330bbf23c2a4f16e4b, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_142b6a373d02d4330bbf23c2a4f16e4b->m_type_description == NULL);
    frame_142b6a373d02d4330bbf23c2a4f16e4b = cache_frame_142b6a373d02d4330bbf23c2a4f16e4b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_142b6a373d02d4330bbf23c2a4f16e4b);
    assert(Py_REFCNT(frame_142b6a373d02d4330bbf23c2a4f16e4b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 72;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[5]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 73;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[6]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 74;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[7]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 76;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[8]);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 77;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[9]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 79;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[10]);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 80;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[11]);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 81;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[12]);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 82;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[13]);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 83;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[14]);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 84;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[15]);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_13;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 85;
        tmp_call_result_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[16]);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 86;
        tmp_call_result_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[17]);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame.f_lineno = 87;
        tmp_call_result_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[18]);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_142b6a373d02d4330bbf23c2a4f16e4b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_142b6a373d02d4330bbf23c2a4f16e4b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_142b6a373d02d4330bbf23c2a4f16e4b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_142b6a373d02d4330bbf23c2a4f16e4b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_142b6a373d02d4330bbf23c2a4f16e4b == cache_frame_142b6a373d02d4330bbf23c2a4f16e4b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_142b6a373d02d4330bbf23c2a4f16e4b);
        cache_frame_142b6a373d02d4330bbf23c2a4f16e4b = NULL;
    }

    assertFrameObject(frame_142b6a373d02d4330bbf23c2a4f16e4b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__3_reload_all_click(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_baba6cb60499f6b78ac61e0833f9b89e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_baba6cb60499f6b78ac61e0833f9b89e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_baba6cb60499f6b78ac61e0833f9b89e)) {
        Py_XDECREF(cache_frame_baba6cb60499f6b78ac61e0833f9b89e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_baba6cb60499f6b78ac61e0833f9b89e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_baba6cb60499f6b78ac61e0833f9b89e = MAKE_FUNCTION_FRAME(tstate, codeobj_baba6cb60499f6b78ac61e0833f9b89e, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_baba6cb60499f6b78ac61e0833f9b89e->m_type_description == NULL);
    frame_baba6cb60499f6b78ac61e0833f9b89e = cache_frame_baba6cb60499f6b78ac61e0833f9b89e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_baba6cb60499f6b78ac61e0833f9b89e);
    assert(Py_REFCNT(frame_baba6cb60499f6b78ac61e0833f9b89e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_baba6cb60499f6b78ac61e0833f9b89e->m_frame.f_lineno = 90;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_baba6cb60499f6b78ac61e0833f9b89e->m_frame.f_lineno = 91;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_baba6cb60499f6b78ac61e0833f9b89e->m_frame.f_lineno = 92;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_baba6cb60499f6b78ac61e0833f9b89e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_baba6cb60499f6b78ac61e0833f9b89e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_baba6cb60499f6b78ac61e0833f9b89e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_baba6cb60499f6b78ac61e0833f9b89e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_baba6cb60499f6b78ac61e0833f9b89e == cache_frame_baba6cb60499f6b78ac61e0833f9b89e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_baba6cb60499f6b78ac61e0833f9b89e);
        cache_frame_baba6cb60499f6b78ac61e0833f9b89e = NULL;
    }

    assertFrameObject(frame_baba6cb60499f6b78ac61e0833f9b89e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f51c9d08dd0d2b506cc72402b99a0fd9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9)) {
        Py_XDECREF(cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9 = MAKE_FUNCTION_FRAME(tstate, codeobj_f51c9d08dd0d2b506cc72402b99a0fd9, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9->m_type_description == NULL);
    frame_f51c9d08dd0d2b506cc72402b99a0fd9 = cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f51c9d08dd0d2b506cc72402b99a0fd9);
    assert(Py_REFCNT(frame_f51c9d08dd0d2b506cc72402b99a0fd9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f51c9d08dd0d2b506cc72402b99a0fd9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f51c9d08dd0d2b506cc72402b99a0fd9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f51c9d08dd0d2b506cc72402b99a0fd9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f51c9d08dd0d2b506cc72402b99a0fd9,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f51c9d08dd0d2b506cc72402b99a0fd9 == cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9);
        cache_frame_f51c9d08dd0d2b506cc72402b99a0fd9 = NULL;
    }

    assertFrameObject(frame_f51c9d08dd0d2b506cc72402b99a0fd9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8944baf59aee0b914cacc69a856da554;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8944baf59aee0b914cacc69a856da554 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8944baf59aee0b914cacc69a856da554)) {
        Py_XDECREF(cache_frame_8944baf59aee0b914cacc69a856da554);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8944baf59aee0b914cacc69a856da554 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8944baf59aee0b914cacc69a856da554 = MAKE_FUNCTION_FRAME(tstate, codeobj_8944baf59aee0b914cacc69a856da554, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8944baf59aee0b914cacc69a856da554->m_type_description == NULL);
    frame_8944baf59aee0b914cacc69a856da554 = cache_frame_8944baf59aee0b914cacc69a856da554;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8944baf59aee0b914cacc69a856da554);
    assert(Py_REFCNT(frame_8944baf59aee0b914cacc69a856da554) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8944baf59aee0b914cacc69a856da554, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8944baf59aee0b914cacc69a856da554->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8944baf59aee0b914cacc69a856da554, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8944baf59aee0b914cacc69a856da554,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8944baf59aee0b914cacc69a856da554 == cache_frame_8944baf59aee0b914cacc69a856da554) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8944baf59aee0b914cacc69a856da554);
        cache_frame_8944baf59aee0b914cacc69a856da554 = NULL;
    }

    assertFrameObject(frame_8944baf59aee0b914cacc69a856da554);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_bd293bef960088295314f18f632283f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd293bef960088295314f18f632283f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd293bef960088295314f18f632283f0)) {
        Py_XDECREF(cache_frame_bd293bef960088295314f18f632283f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd293bef960088295314f18f632283f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd293bef960088295314f18f632283f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_bd293bef960088295314f18f632283f0, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd293bef960088295314f18f632283f0->m_type_description == NULL);
    frame_bd293bef960088295314f18f632283f0 = cache_frame_bd293bef960088295314f18f632283f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bd293bef960088295314f18f632283f0);
    assert(Py_REFCNT(frame_bd293bef960088295314f18f632283f0) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 141;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd293bef960088295314f18f632283f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd293bef960088295314f18f632283f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd293bef960088295314f18f632283f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd293bef960088295314f18f632283f0,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_bd293bef960088295314f18f632283f0 == cache_frame_bd293bef960088295314f18f632283f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd293bef960088295314f18f632283f0);
        cache_frame_bd293bef960088295314f18f632283f0 = NULL;
    }

    assertFrameObject(frame_bd293bef960088295314f18f632283f0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__7_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_53a9a748ab2517e71d592c1fb72feab4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53a9a748ab2517e71d592c1fb72feab4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53a9a748ab2517e71d592c1fb72feab4)) {
        Py_XDECREF(cache_frame_53a9a748ab2517e71d592c1fb72feab4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53a9a748ab2517e71d592c1fb72feab4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53a9a748ab2517e71d592c1fb72feab4 = MAKE_FUNCTION_FRAME(tstate, codeobj_53a9a748ab2517e71d592c1fb72feab4, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53a9a748ab2517e71d592c1fb72feab4->m_type_description == NULL);
    frame_53a9a748ab2517e71d592c1fb72feab4 = cache_frame_53a9a748ab2517e71d592c1fb72feab4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_53a9a748ab2517e71d592c1fb72feab4);
    assert(Py_REFCNT(frame_53a9a748ab2517e71d592c1fb72feab4) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[29]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 145;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53a9a748ab2517e71d592c1fb72feab4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53a9a748ab2517e71d592c1fb72feab4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53a9a748ab2517e71d592c1fb72feab4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53a9a748ab2517e71d592c1fb72feab4,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_53a9a748ab2517e71d592c1fb72feab4 == cache_frame_53a9a748ab2517e71d592c1fb72feab4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53a9a748ab2517e71d592c1fb72feab4);
        cache_frame_53a9a748ab2517e71d592c1fb72feab4 = NULL;
    }

    assertFrameObject(frame_53a9a748ab2517e71d592c1fb72feab4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__8_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d7230286e0fd868cdc6456be82af62cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d7230286e0fd868cdc6456be82af62cf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d7230286e0fd868cdc6456be82af62cf)) {
        Py_XDECREF(cache_frame_d7230286e0fd868cdc6456be82af62cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7230286e0fd868cdc6456be82af62cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7230286e0fd868cdc6456be82af62cf = MAKE_FUNCTION_FRAME(tstate, codeobj_d7230286e0fd868cdc6456be82af62cf, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7230286e0fd868cdc6456be82af62cf->m_type_description == NULL);
    frame_d7230286e0fd868cdc6456be82af62cf = cache_frame_d7230286e0fd868cdc6456be82af62cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d7230286e0fd868cdc6456be82af62cf);
    assert(Py_REFCNT(frame_d7230286e0fd868cdc6456be82af62cf) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7230286e0fd868cdc6456be82af62cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7230286e0fd868cdc6456be82af62cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7230286e0fd868cdc6456be82af62cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7230286e0fd868cdc6456be82af62cf,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d7230286e0fd868cdc6456be82af62cf == cache_frame_d7230286e0fd868cdc6456be82af62cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7230286e0fd868cdc6456be82af62cf);
        cache_frame_d7230286e0fd868cdc6456be82af62cf = NULL;
    }

    assertFrameObject(frame_d7230286e0fd868cdc6456be82af62cf);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__9_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_65c5e9c1ebf721682e7948765e18872f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65c5e9c1ebf721682e7948765e18872f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65c5e9c1ebf721682e7948765e18872f)) {
        Py_XDECREF(cache_frame_65c5e9c1ebf721682e7948765e18872f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65c5e9c1ebf721682e7948765e18872f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65c5e9c1ebf721682e7948765e18872f = MAKE_FUNCTION_FRAME(tstate, codeobj_65c5e9c1ebf721682e7948765e18872f, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65c5e9c1ebf721682e7948765e18872f->m_type_description == NULL);
    frame_65c5e9c1ebf721682e7948765e18872f = cache_frame_65c5e9c1ebf721682e7948765e18872f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_65c5e9c1ebf721682e7948765e18872f);
    assert(Py_REFCNT(frame_65c5e9c1ebf721682e7948765e18872f) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65c5e9c1ebf721682e7948765e18872f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65c5e9c1ebf721682e7948765e18872f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65c5e9c1ebf721682e7948765e18872f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65c5e9c1ebf721682e7948765e18872f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_65c5e9c1ebf721682e7948765e18872f == cache_frame_65c5e9c1ebf721682e7948765e18872f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65c5e9c1ebf721682e7948765e18872f);
        cache_frame_65c5e9c1ebf721682e7948765e18872f = NULL;
    }

    assertFrameObject(frame_65c5e9c1ebf721682e7948765e18872f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__10_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_bda717bcf9f0144303333174beebca30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bda717bcf9f0144303333174beebca30 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bda717bcf9f0144303333174beebca30)) {
        Py_XDECREF(cache_frame_bda717bcf9f0144303333174beebca30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bda717bcf9f0144303333174beebca30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bda717bcf9f0144303333174beebca30 = MAKE_FUNCTION_FRAME(tstate, codeobj_bda717bcf9f0144303333174beebca30, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bda717bcf9f0144303333174beebca30->m_type_description == NULL);
    frame_bda717bcf9f0144303333174beebca30 = cache_frame_bda717bcf9f0144303333174beebca30;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bda717bcf9f0144303333174beebca30);
    assert(Py_REFCNT(frame_bda717bcf9f0144303333174beebca30) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[32]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 181;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bda717bcf9f0144303333174beebca30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bda717bcf9f0144303333174beebca30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bda717bcf9f0144303333174beebca30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bda717bcf9f0144303333174beebca30,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_bda717bcf9f0144303333174beebca30 == cache_frame_bda717bcf9f0144303333174beebca30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bda717bcf9f0144303333174beebca30);
        cache_frame_bda717bcf9f0144303333174beebca30 = NULL;
    }

    assertFrameObject(frame_bda717bcf9f0144303333174beebca30);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__11_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ad3a21bcf2a94436cc6207a6706962f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad3a21bcf2a94436cc6207a6706962f1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad3a21bcf2a94436cc6207a6706962f1)) {
        Py_XDECREF(cache_frame_ad3a21bcf2a94436cc6207a6706962f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad3a21bcf2a94436cc6207a6706962f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad3a21bcf2a94436cc6207a6706962f1 = MAKE_FUNCTION_FRAME(tstate, codeobj_ad3a21bcf2a94436cc6207a6706962f1, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad3a21bcf2a94436cc6207a6706962f1->m_type_description == NULL);
    frame_ad3a21bcf2a94436cc6207a6706962f1 = cache_frame_ad3a21bcf2a94436cc6207a6706962f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ad3a21bcf2a94436cc6207a6706962f1);
    assert(Py_REFCNT(frame_ad3a21bcf2a94436cc6207a6706962f1) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad3a21bcf2a94436cc6207a6706962f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad3a21bcf2a94436cc6207a6706962f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad3a21bcf2a94436cc6207a6706962f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad3a21bcf2a94436cc6207a6706962f1,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ad3a21bcf2a94436cc6207a6706962f1 == cache_frame_ad3a21bcf2a94436cc6207a6706962f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad3a21bcf2a94436cc6207a6706962f1);
        cache_frame_ad3a21bcf2a94436cc6207a6706962f1 = NULL;
    }

    assertFrameObject(frame_ad3a21bcf2a94436cc6207a6706962f1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__12_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_6b5a38954e16ca4ede940d91cbd98ee1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b5a38954e16ca4ede940d91cbd98ee1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b5a38954e16ca4ede940d91cbd98ee1)) {
        Py_XDECREF(cache_frame_6b5a38954e16ca4ede940d91cbd98ee1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b5a38954e16ca4ede940d91cbd98ee1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b5a38954e16ca4ede940d91cbd98ee1 = MAKE_FUNCTION_FRAME(tstate, codeobj_6b5a38954e16ca4ede940d91cbd98ee1, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b5a38954e16ca4ede940d91cbd98ee1->m_type_description == NULL);
    frame_6b5a38954e16ca4ede940d91cbd98ee1 = cache_frame_6b5a38954e16ca4ede940d91cbd98ee1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b5a38954e16ca4ede940d91cbd98ee1);
    assert(Py_REFCNT(frame_6b5a38954e16ca4ede940d91cbd98ee1) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[34]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 194;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b5a38954e16ca4ede940d91cbd98ee1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b5a38954e16ca4ede940d91cbd98ee1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b5a38954e16ca4ede940d91cbd98ee1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b5a38954e16ca4ede940d91cbd98ee1,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_6b5a38954e16ca4ede940d91cbd98ee1 == cache_frame_6b5a38954e16ca4ede940d91cbd98ee1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b5a38954e16ca4ede940d91cbd98ee1);
        cache_frame_6b5a38954e16ca4ede940d91cbd98ee1 = NULL;
    }

    assertFrameObject(frame_6b5a38954e16ca4ede940d91cbd98ee1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__13_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c604a2f07d4162305afc30c9df147d29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c604a2f07d4162305afc30c9df147d29 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c604a2f07d4162305afc30c9df147d29)) {
        Py_XDECREF(cache_frame_c604a2f07d4162305afc30c9df147d29);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c604a2f07d4162305afc30c9df147d29 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c604a2f07d4162305afc30c9df147d29 = MAKE_FUNCTION_FRAME(tstate, codeobj_c604a2f07d4162305afc30c9df147d29, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c604a2f07d4162305afc30c9df147d29->m_type_description == NULL);
    frame_c604a2f07d4162305afc30c9df147d29 = cache_frame_c604a2f07d4162305afc30c9df147d29;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c604a2f07d4162305afc30c9df147d29);
    assert(Py_REFCNT(frame_c604a2f07d4162305afc30c9df147d29) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c604a2f07d4162305afc30c9df147d29, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c604a2f07d4162305afc30c9df147d29->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c604a2f07d4162305afc30c9df147d29, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c604a2f07d4162305afc30c9df147d29,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c604a2f07d4162305afc30c9df147d29 == cache_frame_c604a2f07d4162305afc30c9df147d29) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c604a2f07d4162305afc30c9df147d29);
        cache_frame_c604a2f07d4162305afc30c9df147d29 = NULL;
    }

    assertFrameObject(frame_c604a2f07d4162305afc30c9df147d29);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__14_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_f4e9a51067722ce2e0c3e75ef3141f9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d)) {
        Py_XDECREF(cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d = MAKE_FUNCTION_FRAME(tstate, codeobj_f4e9a51067722ce2e0c3e75ef3141f9d, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d->m_type_description == NULL);
    frame_f4e9a51067722ce2e0c3e75ef3141f9d = cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f4e9a51067722ce2e0c3e75ef3141f9d);
    assert(Py_REFCNT(frame_f4e9a51067722ce2e0c3e75ef3141f9d) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[36]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 207;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4e9a51067722ce2e0c3e75ef3141f9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4e9a51067722ce2e0c3e75ef3141f9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4e9a51067722ce2e0c3e75ef3141f9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4e9a51067722ce2e0c3e75ef3141f9d,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_f4e9a51067722ce2e0c3e75ef3141f9d == cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d);
        cache_frame_f4e9a51067722ce2e0c3e75ef3141f9d = NULL;
    }

    assertFrameObject(frame_f4e9a51067722ce2e0c3e75ef3141f9d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__15_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_112c386ae922990dd72147d51bbc183d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_112c386ae922990dd72147d51bbc183d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_112c386ae922990dd72147d51bbc183d)) {
        Py_XDECREF(cache_frame_112c386ae922990dd72147d51bbc183d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_112c386ae922990dd72147d51bbc183d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_112c386ae922990dd72147d51bbc183d = MAKE_FUNCTION_FRAME(tstate, codeobj_112c386ae922990dd72147d51bbc183d, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_112c386ae922990dd72147d51bbc183d->m_type_description == NULL);
    frame_112c386ae922990dd72147d51bbc183d = cache_frame_112c386ae922990dd72147d51bbc183d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_112c386ae922990dd72147d51bbc183d);
    assert(Py_REFCNT(frame_112c386ae922990dd72147d51bbc183d) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[37]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 213;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_112c386ae922990dd72147d51bbc183d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_112c386ae922990dd72147d51bbc183d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_112c386ae922990dd72147d51bbc183d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_112c386ae922990dd72147d51bbc183d,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_112c386ae922990dd72147d51bbc183d == cache_frame_112c386ae922990dd72147d51bbc183d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_112c386ae922990dd72147d51bbc183d);
        cache_frame_112c386ae922990dd72147d51bbc183d = NULL;
    }

    assertFrameObject(frame_112c386ae922990dd72147d51bbc183d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__16_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_44febac1b16adbd6dc0cbbfafeda6d4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c)) {
        Py_XDECREF(cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c = MAKE_FUNCTION_FRAME(tstate, codeobj_44febac1b16adbd6dc0cbbfafeda6d4c, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c->m_type_description == NULL);
    frame_44febac1b16adbd6dc0cbbfafeda6d4c = cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_44febac1b16adbd6dc0cbbfafeda6d4c);
    assert(Py_REFCNT(frame_44febac1b16adbd6dc0cbbfafeda6d4c) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[38]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 217;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44febac1b16adbd6dc0cbbfafeda6d4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44febac1b16adbd6dc0cbbfafeda6d4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44febac1b16adbd6dc0cbbfafeda6d4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44febac1b16adbd6dc0cbbfafeda6d4c,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_44febac1b16adbd6dc0cbbfafeda6d4c == cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c);
        cache_frame_44febac1b16adbd6dc0cbbfafeda6d4c = NULL;
    }

    assertFrameObject(frame_44febac1b16adbd6dc0cbbfafeda6d4c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__17_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_1e6d89a986fabe5bc3070dd8510d7c49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e6d89a986fabe5bc3070dd8510d7c49 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e6d89a986fabe5bc3070dd8510d7c49)) {
        Py_XDECREF(cache_frame_1e6d89a986fabe5bc3070dd8510d7c49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e6d89a986fabe5bc3070dd8510d7c49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e6d89a986fabe5bc3070dd8510d7c49 = MAKE_FUNCTION_FRAME(tstate, codeobj_1e6d89a986fabe5bc3070dd8510d7c49, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e6d89a986fabe5bc3070dd8510d7c49->m_type_description == NULL);
    frame_1e6d89a986fabe5bc3070dd8510d7c49 = cache_frame_1e6d89a986fabe5bc3070dd8510d7c49;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1e6d89a986fabe5bc3070dd8510d7c49);
    assert(Py_REFCNT(frame_1e6d89a986fabe5bc3070dd8510d7c49) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[39]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 229;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e6d89a986fabe5bc3070dd8510d7c49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e6d89a986fabe5bc3070dd8510d7c49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e6d89a986fabe5bc3070dd8510d7c49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e6d89a986fabe5bc3070dd8510d7c49,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_1e6d89a986fabe5bc3070dd8510d7c49 == cache_frame_1e6d89a986fabe5bc3070dd8510d7c49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e6d89a986fabe5bc3070dd8510d7c49);
        cache_frame_1e6d89a986fabe5bc3070dd8510d7c49 = NULL;
    }

    assertFrameObject(frame_1e6d89a986fabe5bc3070dd8510d7c49);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__18_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_6dc8340723a0a2a7e75390ee59d42ecb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6dc8340723a0a2a7e75390ee59d42ecb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6dc8340723a0a2a7e75390ee59d42ecb)) {
        Py_XDECREF(cache_frame_6dc8340723a0a2a7e75390ee59d42ecb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6dc8340723a0a2a7e75390ee59d42ecb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6dc8340723a0a2a7e75390ee59d42ecb = MAKE_FUNCTION_FRAME(tstate, codeobj_6dc8340723a0a2a7e75390ee59d42ecb, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6dc8340723a0a2a7e75390ee59d42ecb->m_type_description == NULL);
    frame_6dc8340723a0a2a7e75390ee59d42ecb = cache_frame_6dc8340723a0a2a7e75390ee59d42ecb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6dc8340723a0a2a7e75390ee59d42ecb);
    assert(Py_REFCNT(frame_6dc8340723a0a2a7e75390ee59d42ecb) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[40]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 235;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6dc8340723a0a2a7e75390ee59d42ecb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6dc8340723a0a2a7e75390ee59d42ecb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dc8340723a0a2a7e75390ee59d42ecb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6dc8340723a0a2a7e75390ee59d42ecb,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_6dc8340723a0a2a7e75390ee59d42ecb == cache_frame_6dc8340723a0a2a7e75390ee59d42ecb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6dc8340723a0a2a7e75390ee59d42ecb);
        cache_frame_6dc8340723a0a2a7e75390ee59d42ecb = NULL;
    }

    assertFrameObject(frame_6dc8340723a0a2a7e75390ee59d42ecb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__19_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_c5af2ad18b03d5ae7b4f7d1f356f50ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec)) {
        Py_XDECREF(cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec = MAKE_FUNCTION_FRAME(tstate, codeobj_c5af2ad18b03d5ae7b4f7d1f356f50ec, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec->m_type_description == NULL);
    frame_c5af2ad18b03d5ae7b4f7d1f356f50ec = cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c5af2ad18b03d5ae7b4f7d1f356f50ec);
    assert(Py_REFCNT(frame_c5af2ad18b03d5ae7b4f7d1f356f50ec) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[41]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 239;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5af2ad18b03d5ae7b4f7d1f356f50ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5af2ad18b03d5ae7b4f7d1f356f50ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5af2ad18b03d5ae7b4f7d1f356f50ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5af2ad18b03d5ae7b4f7d1f356f50ec,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_c5af2ad18b03d5ae7b4f7d1f356f50ec == cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec);
        cache_frame_c5af2ad18b03d5ae7b4f7d1f356f50ec = NULL;
    }

    assertFrameObject(frame_c5af2ad18b03d5ae7b4f7d1f356f50ec);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__20_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_bc5fd05e31ecb77249ba0976ba5bf446;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc5fd05e31ecb77249ba0976ba5bf446 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc5fd05e31ecb77249ba0976ba5bf446)) {
        Py_XDECREF(cache_frame_bc5fd05e31ecb77249ba0976ba5bf446);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc5fd05e31ecb77249ba0976ba5bf446 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc5fd05e31ecb77249ba0976ba5bf446 = MAKE_FUNCTION_FRAME(tstate, codeobj_bc5fd05e31ecb77249ba0976ba5bf446, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc5fd05e31ecb77249ba0976ba5bf446->m_type_description == NULL);
    frame_bc5fd05e31ecb77249ba0976ba5bf446 = cache_frame_bc5fd05e31ecb77249ba0976ba5bf446;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bc5fd05e31ecb77249ba0976ba5bf446);
    assert(Py_REFCNT(frame_bc5fd05e31ecb77249ba0976ba5bf446) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[42]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 247;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc5fd05e31ecb77249ba0976ba5bf446, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc5fd05e31ecb77249ba0976ba5bf446->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc5fd05e31ecb77249ba0976ba5bf446, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc5fd05e31ecb77249ba0976ba5bf446,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_bc5fd05e31ecb77249ba0976ba5bf446 == cache_frame_bc5fd05e31ecb77249ba0976ba5bf446) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc5fd05e31ecb77249ba0976ba5bf446);
        cache_frame_bc5fd05e31ecb77249ba0976ba5bf446 = NULL;
    }

    assertFrameObject(frame_bc5fd05e31ecb77249ba0976ba5bf446);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__21_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_bce61d1991e680e9b616b1ba343564a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bce61d1991e680e9b616b1ba343564a9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bce61d1991e680e9b616b1ba343564a9)) {
        Py_XDECREF(cache_frame_bce61d1991e680e9b616b1ba343564a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bce61d1991e680e9b616b1ba343564a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bce61d1991e680e9b616b1ba343564a9 = MAKE_FUNCTION_FRAME(tstate, codeobj_bce61d1991e680e9b616b1ba343564a9, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bce61d1991e680e9b616b1ba343564a9->m_type_description == NULL);
    frame_bce61d1991e680e9b616b1ba343564a9 = cache_frame_bce61d1991e680e9b616b1ba343564a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bce61d1991e680e9b616b1ba343564a9);
    assert(Py_REFCNT(frame_bce61d1991e680e9b616b1ba343564a9) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[43]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 254;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bce61d1991e680e9b616b1ba343564a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bce61d1991e680e9b616b1ba343564a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bce61d1991e680e9b616b1ba343564a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bce61d1991e680e9b616b1ba343564a9,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_bce61d1991e680e9b616b1ba343564a9 == cache_frame_bce61d1991e680e9b616b1ba343564a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bce61d1991e680e9b616b1ba343564a9);
        cache_frame_bce61d1991e680e9b616b1ba343564a9 = NULL;
    }

    assertFrameObject(frame_bce61d1991e680e9b616b1ba343564a9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__22_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_65b4811c5b8e5bfa62a47749e8ede1ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed)) {
        Py_XDECREF(cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed = MAKE_FUNCTION_FRAME(tstate, codeobj_65b4811c5b8e5bfa62a47749e8ede1ed, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed->m_type_description == NULL);
    frame_65b4811c5b8e5bfa62a47749e8ede1ed = cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_65b4811c5b8e5bfa62a47749e8ede1ed);
    assert(Py_REFCNT(frame_65b4811c5b8e5bfa62a47749e8ede1ed) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65b4811c5b8e5bfa62a47749e8ede1ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65b4811c5b8e5bfa62a47749e8ede1ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65b4811c5b8e5bfa62a47749e8ede1ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65b4811c5b8e5bfa62a47749e8ede1ed,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_65b4811c5b8e5bfa62a47749e8ede1ed == cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed);
        cache_frame_65b4811c5b8e5bfa62a47749e8ede1ed = NULL;
    }

    assertFrameObject(frame_65b4811c5b8e5bfa62a47749e8ede1ed);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__23_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e6e6facf397f24ca40e0c927340aeb89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6e6facf397f24ca40e0c927340aeb89 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e6e6facf397f24ca40e0c927340aeb89)) {
        Py_XDECREF(cache_frame_e6e6facf397f24ca40e0c927340aeb89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6e6facf397f24ca40e0c927340aeb89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6e6facf397f24ca40e0c927340aeb89 = MAKE_FUNCTION_FRAME(tstate, codeobj_e6e6facf397f24ca40e0c927340aeb89, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6e6facf397f24ca40e0c927340aeb89->m_type_description == NULL);
    frame_e6e6facf397f24ca40e0c927340aeb89 = cache_frame_e6e6facf397f24ca40e0c927340aeb89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e6e6facf397f24ca40e0c927340aeb89);
    assert(Py_REFCNT(frame_e6e6facf397f24ca40e0c927340aeb89) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6e6facf397f24ca40e0c927340aeb89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6e6facf397f24ca40e0c927340aeb89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6e6facf397f24ca40e0c927340aeb89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6e6facf397f24ca40e0c927340aeb89,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e6e6facf397f24ca40e0c927340aeb89 == cache_frame_e6e6facf397f24ca40e0c927340aeb89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6e6facf397f24ca40e0c927340aeb89);
        cache_frame_e6e6facf397f24ca40e0c927340aeb89 = NULL;
    }

    assertFrameObject(frame_e6e6facf397f24ca40e0c927340aeb89);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__24_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_afdb1391ac33d82aa82bf3685cbc469c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afdb1391ac33d82aa82bf3685cbc469c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afdb1391ac33d82aa82bf3685cbc469c)) {
        Py_XDECREF(cache_frame_afdb1391ac33d82aa82bf3685cbc469c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afdb1391ac33d82aa82bf3685cbc469c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afdb1391ac33d82aa82bf3685cbc469c = MAKE_FUNCTION_FRAME(tstate, codeobj_afdb1391ac33d82aa82bf3685cbc469c, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afdb1391ac33d82aa82bf3685cbc469c->m_type_description == NULL);
    frame_afdb1391ac33d82aa82bf3685cbc469c = cache_frame_afdb1391ac33d82aa82bf3685cbc469c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_afdb1391ac33d82aa82bf3685cbc469c);
    assert(Py_REFCNT(frame_afdb1391ac33d82aa82bf3685cbc469c) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[46]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 279;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afdb1391ac33d82aa82bf3685cbc469c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afdb1391ac33d82aa82bf3685cbc469c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afdb1391ac33d82aa82bf3685cbc469c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afdb1391ac33d82aa82bf3685cbc469c,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_afdb1391ac33d82aa82bf3685cbc469c == cache_frame_afdb1391ac33d82aa82bf3685cbc469c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afdb1391ac33d82aa82bf3685cbc469c);
        cache_frame_afdb1391ac33d82aa82bf3685cbc469c = NULL;
    }

    assertFrameObject(frame_afdb1391ac33d82aa82bf3685cbc469c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__25_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_97165c142357f212d740d4e7b8c82b10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97165c142357f212d740d4e7b8c82b10 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97165c142357f212d740d4e7b8c82b10)) {
        Py_XDECREF(cache_frame_97165c142357f212d740d4e7b8c82b10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97165c142357f212d740d4e7b8c82b10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97165c142357f212d740d4e7b8c82b10 = MAKE_FUNCTION_FRAME(tstate, codeobj_97165c142357f212d740d4e7b8c82b10, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97165c142357f212d740d4e7b8c82b10->m_type_description == NULL);
    frame_97165c142357f212d740d4e7b8c82b10 = cache_frame_97165c142357f212d740d4e7b8c82b10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_97165c142357f212d740d4e7b8c82b10);
    assert(Py_REFCNT(frame_97165c142357f212d740d4e7b8c82b10) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97165c142357f212d740d4e7b8c82b10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97165c142357f212d740d4e7b8c82b10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97165c142357f212d740d4e7b8c82b10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97165c142357f212d740d4e7b8c82b10,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_97165c142357f212d740d4e7b8c82b10 == cache_frame_97165c142357f212d740d4e7b8c82b10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97165c142357f212d740d4e7b8c82b10);
        cache_frame_97165c142357f212d740d4e7b8c82b10 = NULL;
    }

    assertFrameObject(frame_97165c142357f212d740d4e7b8c82b10);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__26_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_953475fdae7fdccf89fc1e31513a1644;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_953475fdae7fdccf89fc1e31513a1644 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_953475fdae7fdccf89fc1e31513a1644)) {
        Py_XDECREF(cache_frame_953475fdae7fdccf89fc1e31513a1644);

#if _DEBUG_REFCOUNTS
        if (cache_frame_953475fdae7fdccf89fc1e31513a1644 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_953475fdae7fdccf89fc1e31513a1644 = MAKE_FUNCTION_FRAME(tstate, codeobj_953475fdae7fdccf89fc1e31513a1644, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_953475fdae7fdccf89fc1e31513a1644->m_type_description == NULL);
    frame_953475fdae7fdccf89fc1e31513a1644 = cache_frame_953475fdae7fdccf89fc1e31513a1644;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_953475fdae7fdccf89fc1e31513a1644);
    assert(Py_REFCNT(frame_953475fdae7fdccf89fc1e31513a1644) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[48]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 289;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_953475fdae7fdccf89fc1e31513a1644, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_953475fdae7fdccf89fc1e31513a1644->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_953475fdae7fdccf89fc1e31513a1644, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_953475fdae7fdccf89fc1e31513a1644,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_953475fdae7fdccf89fc1e31513a1644 == cache_frame_953475fdae7fdccf89fc1e31513a1644) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_953475fdae7fdccf89fc1e31513a1644);
        cache_frame_953475fdae7fdccf89fc1e31513a1644 = NULL;
    }

    assertFrameObject(frame_953475fdae7fdccf89fc1e31513a1644);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__27_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c0b038f86e5fc29ab08b303b1b1784ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0b038f86e5fc29ab08b303b1b1784ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c0b038f86e5fc29ab08b303b1b1784ed)) {
        Py_XDECREF(cache_frame_c0b038f86e5fc29ab08b303b1b1784ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0b038f86e5fc29ab08b303b1b1784ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0b038f86e5fc29ab08b303b1b1784ed = MAKE_FUNCTION_FRAME(tstate, codeobj_c0b038f86e5fc29ab08b303b1b1784ed, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0b038f86e5fc29ab08b303b1b1784ed->m_type_description == NULL);
    frame_c0b038f86e5fc29ab08b303b1b1784ed = cache_frame_c0b038f86e5fc29ab08b303b1b1784ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c0b038f86e5fc29ab08b303b1b1784ed);
    assert(Py_REFCNT(frame_c0b038f86e5fc29ab08b303b1b1784ed) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0b038f86e5fc29ab08b303b1b1784ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0b038f86e5fc29ab08b303b1b1784ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0b038f86e5fc29ab08b303b1b1784ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0b038f86e5fc29ab08b303b1b1784ed,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_c0b038f86e5fc29ab08b303b1b1784ed == cache_frame_c0b038f86e5fc29ab08b303b1b1784ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0b038f86e5fc29ab08b303b1b1784ed);
        cache_frame_c0b038f86e5fc29ab08b303b1b1784ed = NULL;
    }

    assertFrameObject(frame_c0b038f86e5fc29ab08b303b1b1784ed);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__28_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_e755036aac988235f0a91b514e4535a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e755036aac988235f0a91b514e4535a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e755036aac988235f0a91b514e4535a3)) {
        Py_XDECREF(cache_frame_e755036aac988235f0a91b514e4535a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e755036aac988235f0a91b514e4535a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e755036aac988235f0a91b514e4535a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_e755036aac988235f0a91b514e4535a3, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e755036aac988235f0a91b514e4535a3->m_type_description == NULL);
    frame_e755036aac988235f0a91b514e4535a3 = cache_frame_e755036aac988235f0a91b514e4535a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e755036aac988235f0a91b514e4535a3);
    assert(Py_REFCNT(frame_e755036aac988235f0a91b514e4535a3) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[50]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e755036aac988235f0a91b514e4535a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e755036aac988235f0a91b514e4535a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e755036aac988235f0a91b514e4535a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e755036aac988235f0a91b514e4535a3,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_e755036aac988235f0a91b514e4535a3 == cache_frame_e755036aac988235f0a91b514e4535a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e755036aac988235f0a91b514e4535a3);
        cache_frame_e755036aac988235f0a91b514e4535a3 = NULL;
    }

    assertFrameObject(frame_e755036aac988235f0a91b514e4535a3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__29_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0c3205af2d336610cd11b8470fc09493;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c3205af2d336610cd11b8470fc09493 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c3205af2d336610cd11b8470fc09493)) {
        Py_XDECREF(cache_frame_0c3205af2d336610cd11b8470fc09493);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c3205af2d336610cd11b8470fc09493 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c3205af2d336610cd11b8470fc09493 = MAKE_FUNCTION_FRAME(tstate, codeobj_0c3205af2d336610cd11b8470fc09493, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c3205af2d336610cd11b8470fc09493->m_type_description == NULL);
    frame_0c3205af2d336610cd11b8470fc09493 = cache_frame_0c3205af2d336610cd11b8470fc09493;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c3205af2d336610cd11b8470fc09493);
    assert(Py_REFCNT(frame_0c3205af2d336610cd11b8470fc09493) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c3205af2d336610cd11b8470fc09493, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c3205af2d336610cd11b8470fc09493->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c3205af2d336610cd11b8470fc09493, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c3205af2d336610cd11b8470fc09493,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0c3205af2d336610cd11b8470fc09493 == cache_frame_0c3205af2d336610cd11b8470fc09493) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c3205af2d336610cd11b8470fc09493);
        cache_frame_0c3205af2d336610cd11b8470fc09493 = NULL;
    }

    assertFrameObject(frame_0c3205af2d336610cd11b8470fc09493);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__30_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_be3ff7e5bec5c6bf128f9f047a613fb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5)) {
        Py_XDECREF(cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5 = MAKE_FUNCTION_FRAME(tstate, codeobj_be3ff7e5bec5c6bf128f9f047a613fb5, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5->m_type_description == NULL);
    frame_be3ff7e5bec5c6bf128f9f047a613fb5 = cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_be3ff7e5bec5c6bf128f9f047a613fb5);
    assert(Py_REFCNT(frame_be3ff7e5bec5c6bf128f9f047a613fb5) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[52]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be3ff7e5bec5c6bf128f9f047a613fb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be3ff7e5bec5c6bf128f9f047a613fb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be3ff7e5bec5c6bf128f9f047a613fb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be3ff7e5bec5c6bf128f9f047a613fb5,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_be3ff7e5bec5c6bf128f9f047a613fb5 == cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5);
        cache_frame_be3ff7e5bec5c6bf128f9f047a613fb5 = NULL;
    }

    assertFrameObject(frame_be3ff7e5bec5c6bf128f9f047a613fb5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__31_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_97ad20f748e90837d330cf9c0d3f9d03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97ad20f748e90837d330cf9c0d3f9d03 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_97ad20f748e90837d330cf9c0d3f9d03)) {
        Py_XDECREF(cache_frame_97ad20f748e90837d330cf9c0d3f9d03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97ad20f748e90837d330cf9c0d3f9d03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97ad20f748e90837d330cf9c0d3f9d03 = MAKE_FUNCTION_FRAME(tstate, codeobj_97ad20f748e90837d330cf9c0d3f9d03, module_tray_ico, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97ad20f748e90837d330cf9c0d3f9d03->m_type_description == NULL);
    frame_97ad20f748e90837d330cf9c0d3f9d03 = cache_frame_97ad20f748e90837d330cf9c0d3f9d03;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_97ad20f748e90837d330cf9c0d3f9d03);
    assert(Py_REFCNT(frame_97ad20f748e90837d330cf9c0d3f9d03) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97ad20f748e90837d330cf9c0d3f9d03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97ad20f748e90837d330cf9c0d3f9d03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97ad20f748e90837d330cf9c0d3f9d03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97ad20f748e90837d330cf9c0d3f9d03,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_97ad20f748e90837d330cf9c0d3f9d03 == cache_frame_97ad20f748e90837d330cf9c0d3f9d03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97ad20f748e90837d330cf9c0d3f9d03);
        cache_frame_97ad20f748e90837d330cf9c0d3f9d03 = NULL;
    }

    assertFrameObject(frame_97ad20f748e90837d330cf9c0d3f9d03);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__32_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_567161564566d9f4344583713e3bc69b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_567161564566d9f4344583713e3bc69b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_567161564566d9f4344583713e3bc69b)) {
        Py_XDECREF(cache_frame_567161564566d9f4344583713e3bc69b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_567161564566d9f4344583713e3bc69b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_567161564566d9f4344583713e3bc69b = MAKE_FUNCTION_FRAME(tstate, codeobj_567161564566d9f4344583713e3bc69b, module_tray_ico, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_567161564566d9f4344583713e3bc69b->m_type_description == NULL);
    frame_567161564566d9f4344583713e3bc69b = cache_frame_567161564566d9f4344583713e3bc69b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_567161564566d9f4344583713e3bc69b);
    assert(Py_REFCNT(frame_567161564566d9f4344583713e3bc69b) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[54]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 339;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_567161564566d9f4344583713e3bc69b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_567161564566d9f4344583713e3bc69b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_567161564566d9f4344583713e3bc69b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_567161564566d9f4344583713e3bc69b,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_567161564566d9f4344583713e3bc69b == cache_frame_567161564566d9f4344583713e3bc69b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_567161564566d9f4344583713e3bc69b);
        cache_frame_567161564566d9f4344583713e3bc69b = NULL;
    }

    assertFrameObject(frame_567161564566d9f4344583713e3bc69b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tray_ico$$$function__33_task_manager_click(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_released_hotkey = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_055590190ac07f5dee9af7e2aa6dffb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_055590190ac07f5dee9af7e2aa6dffb4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_055590190ac07f5dee9af7e2aa6dffb4)) {
        Py_XDECREF(cache_frame_055590190ac07f5dee9af7e2aa6dffb4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_055590190ac07f5dee9af7e2aa6dffb4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_055590190ac07f5dee9af7e2aa6dffb4 = MAKE_FUNCTION_FRAME(tstate, codeobj_055590190ac07f5dee9af7e2aa6dffb4, module_tray_ico, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_055590190ac07f5dee9af7e2aa6dffb4->m_type_description == NULL);
    frame_055590190ac07f5dee9af7e2aa6dffb4 = cache_frame_055590190ac07f5dee9af7e2aa6dffb4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_055590190ac07f5dee9af7e2aa6dffb4);
    assert(Py_REFCNT(frame_055590190ac07f5dee9af7e2aa6dffb4) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_055590190ac07f5dee9af7e2aa6dffb4->m_frame.f_lineno = 373;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_True;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_released_hotkey == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_released_hotkey = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        if (var_released_hotkey == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 379;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = var_released_hotkey;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_055590190ac07f5dee9af7e2aa6dffb4->m_frame.f_lineno = 380;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[59]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_True;
        {
            PyObject *old = var_released_hotkey;
            var_released_hotkey = tmp_assign_source_3;
            Py_INCREF(var_released_hotkey);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_055590190ac07f5dee9af7e2aa6dffb4->m_frame.f_lineno = 383;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[61],
            PyTuple_GET_ITEM(mod_consts[62], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_055590190ac07f5dee9af7e2aa6dffb4->m_frame.f_lineno = 385;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[63]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[64];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[65];
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 378;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[66];
        tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 387;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_6;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_055590190ac07f5dee9af7e2aa6dffb4->m_frame.f_lineno = 388;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[59]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 387;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_055590190ac07f5dee9af7e2aa6dffb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_055590190ac07f5dee9af7e2aa6dffb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_055590190ac07f5dee9af7e2aa6dffb4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_055590190ac07f5dee9af7e2aa6dffb4,
        type_description_1,
        var_released_hotkey,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_055590190ac07f5dee9af7e2aa6dffb4 == cache_frame_055590190ac07f5dee9af7e2aa6dffb4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_055590190ac07f5dee9af7e2aa6dffb4);
        cache_frame_055590190ac07f5dee9af7e2aa6dffb4 = NULL;
    }

    assertFrameObject(frame_055590190ac07f5dee9af7e2aa6dffb4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_released_hotkey);
    var_released_hotkey = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_released_hotkey);
    var_released_hotkey = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__10_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bda717bcf9f0144303333174beebca30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__11_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad3a21bcf2a94436cc6207a6706962f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__12_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__12_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b5a38954e16ca4ede940d91cbd98ee1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__13_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__13_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c604a2f07d4162305afc30c9df147d29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__14_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__14_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4e9a51067722ce2e0c3e75ef3141f9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__15_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__15_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_112c386ae922990dd72147d51bbc183d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__16_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__16_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_44febac1b16adbd6dc0cbbfafeda6d4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__17_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__17_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e6d89a986fabe5bc3070dd8510d7c49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__18_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dc8340723a0a2a7e75390ee59d42ecb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__19_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c5af2ad18b03d5ae7b4f7d1f356f50ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__1_exit_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__1_exit_click,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b773383a472e2cca0d0541715530857,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__20_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc5fd05e31ecb77249ba0976ba5bf446,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__21_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__21_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bce61d1991e680e9b616b1ba343564a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__22_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__22_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65b4811c5b8e5bfa62a47749e8ede1ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__23_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__23_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6e6facf397f24ca40e0c927340aeb89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__24_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__24_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_afdb1391ac33d82aa82bf3685cbc469c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__25_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__25_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97165c142357f212d740d4e7b8c82b10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__26_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__26_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_953475fdae7fdccf89fc1e31513a1644,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__27_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__27_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c0b038f86e5fc29ab08b303b1b1784ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__28_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__28_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e755036aac988235f0a91b514e4535a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__29_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__29_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c3205af2d336610cd11b8470fc09493,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__2_first_time_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__2_first_time_init,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_142b6a373d02d4330bbf23c2a4f16e4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__30_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__30_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_be3ff7e5bec5c6bf128f9f047a613fb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__31_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__31_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97ad20f748e90837d330cf9c0d3f9d03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__32_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__32_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_567161564566d9f4344583713e3bc69b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__33_task_manager_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__33_task_manager_click,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_055590190ac07f5dee9af7e2aa6dffb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__3_reload_all_click() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__3_reload_all_click,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_baba6cb60499f6b78ac61e0833f9b89e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__4_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f51c9d08dd0d2b506cc72402b99a0fd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__5_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8944baf59aee0b914cacc69a856da554,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__6_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd293bef960088295314f18f632283f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__7_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53a9a748ab2517e71d592c1fb72feab4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__8_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7230286e0fd868cdc6456be82af62cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tray_ico$$$function__9_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tray_ico$$$function__9_lambda,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65c5e9c1ebf721682e7948765e18872f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tray_ico,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_tray_ico[] = {
    impl_tray_ico$$$function__1_exit_click,
    impl_tray_ico$$$function__2_first_time_init,
    impl_tray_ico$$$function__3_reload_all_click,
    impl_tray_ico$$$function__4_lambda,
    impl_tray_ico$$$function__5_lambda,
    impl_tray_ico$$$function__6_lambda,
    impl_tray_ico$$$function__7_lambda,
    impl_tray_ico$$$function__8_lambda,
    impl_tray_ico$$$function__9_lambda,
    impl_tray_ico$$$function__10_lambda,
    impl_tray_ico$$$function__11_lambda,
    impl_tray_ico$$$function__12_lambda,
    impl_tray_ico$$$function__13_lambda,
    impl_tray_ico$$$function__14_lambda,
    impl_tray_ico$$$function__15_lambda,
    impl_tray_ico$$$function__16_lambda,
    impl_tray_ico$$$function__17_lambda,
    impl_tray_ico$$$function__18_lambda,
    impl_tray_ico$$$function__19_lambda,
    impl_tray_ico$$$function__20_lambda,
    impl_tray_ico$$$function__21_lambda,
    impl_tray_ico$$$function__22_lambda,
    impl_tray_ico$$$function__23_lambda,
    impl_tray_ico$$$function__24_lambda,
    impl_tray_ico$$$function__25_lambda,
    impl_tray_ico$$$function__26_lambda,
    impl_tray_ico$$$function__27_lambda,
    impl_tray_ico$$$function__28_lambda,
    impl_tray_ico$$$function__29_lambda,
    impl_tray_ico$$$function__30_lambda,
    impl_tray_ico$$$function__31_lambda,
    impl_tray_ico$$$function__32_lambda,
    impl_tray_ico$$$function__33_task_manager_click,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_tray_ico);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(8);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_tray_ico,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_tray_ico,
        sizeof(function_table_tray_ico) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_tray_ico(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("tray_ico");

    // Store the module for future use.
    module_tray_ico = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("tray_ico: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("tray_ico: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "tray_ico" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittray_ico\n");

    moduledict_tray_ico = MODULE_DICT(module_tray_ico);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_tray_ico,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_tray_ico,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[84]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_tray_ico,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_tray_ico,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_tray_ico,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_tray_ico);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_tray_ico);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_74cfca6e139ea5125e5b94a3be257254;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_2);
    }
    frame_74cfca6e139ea5125e5b94a3be257254 = MAKE_MODULE_FRAME(codeobj_74cfca6e139ea5125e5b94a3be257254, module_tray_ico);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_74cfca6e139ea5125e5b94a3be257254);
    assert(Py_REFCNT(frame_74cfca6e139ea5125e5b94a3be257254) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[70], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[71], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[73];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_tray_ico;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[64];
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[73];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_tray_ico;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[74];
        tmp_level_value_2 = mod_consts[64];
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_tray_ico,
                mod_consts[25],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[25]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_tray_ico,
                mod_consts[75],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[75]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_tray_ico,
                mod_consts[76],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[76]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[77];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_tray_ico;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[64];
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_tray_ico,
                mod_consts[78],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[78]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[79];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_tray_ico;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[64];
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_tray_ico,
                mod_consts[22],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[80];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_tray_ico;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[64];
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_tray_ico,
                mod_consts[81],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[82];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_tray_ico;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[64];
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 8;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 48;
        tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = Py_None;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = Py_False;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_tray_ico$$$function__1_exit_click();

        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_tray_ico$$$function__2_first_time_init();

        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_tray_ico$$$function__3_reload_all_click();

        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[95];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[96]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[97]);
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 99;
        tmp_list_element_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            PyList_SET_ITEM(tmp_assign_source_55, 0, tmp_list_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_1;
            }
            tmp_tuple_element_2 = mod_consts[98];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_2;
                PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[99]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_args_value_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_kwargs_value_2 = DICT_COPY(mod_consts[97]);
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 104;
            tmp_list_element_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            Py_DECREF(tmp_kwargs_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_55, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_55);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[101];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[102]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = Py_True;
        tmp_kw_call_value_3_1 = Py_False;
        tmp_kw_call_value_4_1 = Py_False;
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 109;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = MAKE_LIST_EMPTY(25);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_14;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_value_15;
            PyObject *tmp_kw_call_arg_value_0_2;
            PyObject *tmp_kw_call_dict_value_0_2;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_called_value_24;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_kw_call_value_1_2;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_kw_call_value_2_2;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_called_value_25;
            PyObject *tmp_kw_call_arg_value_0_3;
            PyObject *tmp_kw_call_dict_value_0_3;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_value_28;
            PyObject *tmp_kw_call_arg_value_0_4;
            PyObject *tmp_kw_call_dict_value_0_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_kw_call_dict_value_1_2;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_value_34;
            PyObject *tmp_kw_call_arg_value_0_5;
            PyObject *tmp_kw_call_dict_value_0_5;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_called_value_36;
            PyObject *tmp_kw_call_arg_value_0_6;
            PyObject *tmp_kw_call_dict_value_0_6;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_called_value_37;
            PyObject *tmp_kw_call_arg_value_0_7;
            PyObject *tmp_kw_call_dict_value_0_7;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_4;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_called_value_54;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_84;
            PyObject *tmp_args_element_value_85;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_86;
            PyObject *tmp_called_value_57;
            PyObject *tmp_kw_call_arg_value_0_8;
            PyObject *tmp_kw_call_dict_value_0_8;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_87;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_88;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_90;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_called_value_60;
            PyObject *tmp_kw_call_arg_value_0_9;
            PyObject *tmp_kw_call_dict_value_0_9;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_args_element_value_94;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_95;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_96;
            PyObject *tmp_args_element_value_97;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_98;
            PyObject *tmp_called_value_65;
            PyObject *tmp_kw_call_arg_value_0_10;
            PyObject *tmp_kw_call_dict_value_0_10;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_element_value_102;
            PyObject *tmp_args_element_value_103;
            PyObject *tmp_called_value_68;
            PyObject *tmp_kw_call_arg_value_0_11;
            PyObject *tmp_kw_call_dict_value_0_11;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_args_element_value_104;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_105;
            PyObject *tmp_args_element_value_106;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_107;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_108;
            PyObject *tmp_args_element_value_109;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_called_value_72;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_kw_call_value_2_3;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_110;
            PyObject *tmp_args_element_value_111;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_called_value_74;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_4;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_called_value_75;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_5;
            PyList_SET_ITEM(tmp_assign_source_56, 0, tmp_list_element_2);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto list_build_exception_2;
            }
            tmp_tuple_element_3 = mod_consts[104];
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_1;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_format_spec_1;
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;

                    goto tuple_build_exception_3;
                }
                tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[105]);
                if (tmp_format_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;

                    goto tuple_build_exception_3;
                }
                tmp_format_spec_1 = mod_consts[84];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
                Py_DECREF(tmp_format_value_1);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;

                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_string_concat_values_1);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_args_element_value_1 = PyUnicode_Join(mod_consts[84], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto list_build_exception_2;
            }
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 118;

                goto list_build_exception_2;
            }
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 119;

                goto list_build_exception_2;
            }
            tmp_tuple_element_4 = mod_consts[106];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_value_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_kwargs_value_3 = DICT_COPY(mod_consts[107]);
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 119;
            tmp_args_element_value_3 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            Py_DECREF(tmp_kwargs_value_3);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 119;

                goto list_build_exception_2;
            }
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 120;

                goto list_build_exception_2;
            }
            tmp_args_element_value_5 = mod_consts[108];
            tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_dircall_arg1_1 == NULL)) {
                tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_dircall_arg1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 120;

                goto list_build_exception_2;
            }
            tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_dircall_arg2_1 == NULL)) {
                tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_dircall_arg2_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 120;

                goto list_build_exception_2;
            }
            Py_INCREF(tmp_dircall_arg1_1);
            Py_INCREF(tmp_dircall_arg2_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_args_element_value_6 = impl___main__$$$function__3_complex_call_helper_star_list(tstate, dir_call_args);
            }
            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 120;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_args_element_value_6);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);

                exception_lineno = 120;

                goto list_build_exception_2;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);

                exception_lineno = 121;

                goto list_build_exception_2;
            }
            tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[109]);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);

                exception_lineno = 121;

                goto list_build_exception_2;
            }
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 122;

                goto list_build_exception_2;
            }
            tmp_args_element_value_9 = mod_consts[110];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 122;

                goto list_build_exception_2;
            }
            tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[111]);
            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 122;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 122;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_args_element_value_10);
            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);

                exception_lineno = 122;

                goto list_build_exception_2;
            }
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 123;

                goto list_build_exception_2;
            }
            tmp_args_element_value_12 = mod_consts[112];
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 125;

                goto list_build_exception_2;
            }


            tmp_args_element_value_14 = MAKE_FUNCTION_tray_ico$$$function__4_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 125;
            tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 125;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 123;
            {
                PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
                tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_args_element_value_13);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);

                exception_lineno = 123;

                goto list_build_exception_2;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);

                exception_lineno = 129;

                goto list_build_exception_2;
            }
            tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[109]);
            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);

                exception_lineno = 129;

                goto list_build_exception_2;
            }
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 130;

                goto list_build_exception_2;
            }
            tmp_args_element_value_17 = mod_consts[114];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 130;

                goto list_build_exception_2;
            }
            tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[115]);
            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 130;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
            }

            Py_DECREF(tmp_args_element_value_18);
            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);

                exception_lineno = 130;

                goto list_build_exception_2;
            }
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 131;

                goto list_build_exception_2;
            }
            tmp_args_element_value_20 = mod_consts[116];
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 133;

                goto list_build_exception_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_tray_ico$$$function__5_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 133;
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 133;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
            }

            Py_DECREF(tmp_args_element_value_21);
            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);
                Py_DECREF(tmp_args_element_value_3);
                Py_DECREF(tmp_args_element_value_4);
                Py_DECREF(tmp_args_element_value_7);
                Py_DECREF(tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);

                exception_lineno = 131;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_11, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_19};
                tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_5, call_args);
            }

            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 118;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 1, tmp_list_element_2);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 2, tmp_list_element_2);
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_1 = MAKE_FUNCTION_tray_ico$$$function__6_lambda();

            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 142;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[117]);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 142;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 140;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 3, tmp_list_element_2);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_2 = MAKE_FUNCTION_tray_ico$$$function__7_lambda();

            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_2);

                exception_lineno = 146;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[119]);
            if (tmp_kw_call_dict_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_2);

                exception_lineno = 146;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 144;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_2};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 4, tmp_list_element_2);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto list_build_exception_2;
            }
            tmp_args_element_value_23 = mod_consts[120];
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_2;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto list_build_exception_2;
            }
            tmp_args_element_value_26 = mod_consts[121];
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto list_build_exception_2;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_tray_ico$$$function__8_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 159;
            tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
                tmp_args_element_value_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
            }

            Py_DECREF(tmp_args_element_value_27);
            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto list_build_exception_2;
            }
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 163;

                goto list_build_exception_2;
            }
            tmp_args_element_value_30 = mod_consts[122];
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 165;

                goto list_build_exception_2;
            }


            tmp_args_element_value_32 = MAKE_FUNCTION_tray_ico$$$function__9_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 165;
            tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 165;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
                tmp_args_element_value_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
            }

            Py_DECREF(tmp_args_element_value_31);
            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_25);

                exception_lineno = 163;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_29};
                tmp_args_element_value_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
            }

            Py_DECREF(tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_args_element_value_24);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 5, tmp_list_element_2);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 6, tmp_list_element_2);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto list_build_exception_2;
            }
            tmp_args_element_value_33 = mod_consts[123];
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_2;
            }
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_2 = mod_consts[124];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[59]);
            if (tmp_kw_call_value_1_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_2_2 = Py_True;
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 175;
            {
                PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

                tmp_args_element_value_35 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, kw_values, mod_consts[125]);
            }

            Py_DECREF(tmp_kw_call_value_1_2);
            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto list_build_exception_2;
            }
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);

                exception_lineno = 180;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_3 = MAKE_FUNCTION_tray_ico$$$function__10_lambda();

            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_kw_call_arg_value_0_3);

                exception_lineno = 182;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[126]);
            if (tmp_kw_call_dict_value_0_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_kw_call_arg_value_0_3);

                exception_lineno = 182;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_1_1 = Py_True;
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 180;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_3};
                PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
                tmp_args_element_value_36 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_25, args, kw_values, mod_consts[127]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);

                exception_lineno = 180;

                goto list_build_exception_2;
            }
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);

                exception_lineno = 185;

                goto list_build_exception_2;
            }
            tmp_args_element_value_38 = mod_consts[128];
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);

                exception_lineno = 187;

                goto list_build_exception_2;
            }


            tmp_args_element_value_40 = MAKE_FUNCTION_tray_ico$$$function__11_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 187;
            tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);

                exception_lineno = 187;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 185;
            {
                PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
                tmp_args_element_value_37 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
            }

            Py_DECREF(tmp_args_element_value_39);
            if (tmp_args_element_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_35);
                Py_DECREF(tmp_args_element_value_36);

                exception_lineno = 185;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
                tmp_args_element_value_34 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
            }

            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_args_element_value_34);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 7, tmp_list_element_2);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 8, tmp_list_element_2);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_4 = MAKE_FUNCTION_tray_ico$$$function__12_lambda();

            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_4);

                exception_lineno = 194;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[129]);
            if (tmp_kw_call_dict_value_0_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_4);

                exception_lineno = 194;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_1_2 = Py_True;
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 194;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_4};
                PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_2};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_28, args, kw_values, mod_consts[127]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_4);
            Py_DECREF(tmp_kw_call_dict_value_0_4);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 9, tmp_list_element_2);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto list_build_exception_2;
            }
            tmp_args_element_value_41 = mod_consts[130];
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto list_build_exception_2;
            }


            tmp_args_element_value_43 = MAKE_FUNCTION_tray_ico$$$function__13_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 197;
            tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_args_element_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
            }

            Py_DECREF(tmp_args_element_value_42);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 10, tmp_list_element_2);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 11, tmp_list_element_2);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto list_build_exception_2;
            }
            tmp_args_element_value_44 = mod_consts[131];
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto list_build_exception_2;
            }
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 205;
            tmp_args_element_value_46 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[132], 0), mod_consts[133]);
            if (tmp_args_element_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto list_build_exception_2;
            }
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);

                exception_lineno = 206;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_5 = MAKE_FUNCTION_tray_ico$$$function__14_lambda();

            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_kw_call_arg_value_0_5);

                exception_lineno = 208;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[134]);
            if (tmp_kw_call_dict_value_0_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_kw_call_arg_value_0_5);

                exception_lineno = 208;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 206;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_5};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
                tmp_args_element_value_47 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_34, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_5);
            Py_DECREF(tmp_kw_call_dict_value_0_5);
            if (tmp_args_element_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);

                exception_lineno = 206;

                goto list_build_exception_2;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);

                exception_lineno = 210;

                goto list_build_exception_2;
            }
            tmp_args_element_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[109]);
            if (tmp_args_element_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);

                exception_lineno = 210;

                goto list_build_exception_2;
            }
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);

                exception_lineno = 211;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 211;
            tmp_args_element_value_49 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[135], 0), mod_consts[133]);
            if (tmp_args_element_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);

                exception_lineno = 211;

                goto list_build_exception_2;
            }
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);

                exception_lineno = 212;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_6 = MAKE_FUNCTION_tray_ico$$$function__15_lambda();

            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_kw_call_arg_value_0_6);

                exception_lineno = 214;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[136]);
            if (tmp_kw_call_dict_value_0_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_kw_call_arg_value_0_6);

                exception_lineno = 214;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 212;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_6};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
                tmp_args_element_value_50 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_36, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_6);
            Py_DECREF(tmp_kw_call_dict_value_0_6);
            if (tmp_args_element_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);

                exception_lineno = 212;

                goto list_build_exception_2;
            }
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);

                exception_lineno = 216;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_7 = MAKE_FUNCTION_tray_ico$$$function__16_lambda();

            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_kw_call_arg_value_0_7);

                exception_lineno = 218;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[137]);
            if (tmp_kw_call_dict_value_0_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_kw_call_arg_value_0_7);

                exception_lineno = 218;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 216;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_7};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
                tmp_args_element_value_51 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_37, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_7);
            Py_DECREF(tmp_kw_call_dict_value_0_7);
            if (tmp_args_element_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);

                exception_lineno = 216;

                goto list_build_exception_2;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);

                exception_lineno = 220;

                goto list_build_exception_2;
            }
            tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[109]);
            if (tmp_args_element_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);

                exception_lineno = 220;

                goto list_build_exception_2;
            }
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);

                exception_lineno = 221;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 221;
            tmp_args_element_value_53 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[138], 0), mod_consts[133]);
            if (tmp_args_element_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);

                exception_lineno = 221;

                goto list_build_exception_2;
            }
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 222;

                goto list_build_exception_2;
            }
            tmp_args_element_value_55 = mod_consts[139];
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 224;

                goto list_build_exception_2;
            }
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 225;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 225;
            tmp_args_element_value_57 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_41, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[133]);
            if (tmp_args_element_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 225;

                goto list_build_exception_2;
            }
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);

                exception_lineno = 228;

                goto list_build_exception_2;
            }


            tmp_args_element_value_59 = MAKE_FUNCTION_tray_ico$$$function__17_lambda();

            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_59);

                exception_lineno = 230;

                goto list_build_exception_2;
            }
            tmp_args_element_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[141]);
            if (tmp_args_element_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_59);

                exception_lineno = 230;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60};
                tmp_args_element_value_58 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
            }

            Py_DECREF(tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_args_element_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);

                exception_lineno = 228;

                goto list_build_exception_2;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);

                exception_lineno = 232;

                goto list_build_exception_2;
            }
            tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[109]);
            if (tmp_args_element_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);

                exception_lineno = 232;

                goto list_build_exception_2;
            }
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);

                exception_lineno = 233;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 233;
            tmp_args_element_value_62 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[142], 0), mod_consts[133]);
            if (tmp_args_element_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);

                exception_lineno = 233;

                goto list_build_exception_2;
            }
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);

                exception_lineno = 234;

                goto list_build_exception_2;
            }


            tmp_args_element_value_64 = MAKE_FUNCTION_tray_ico$$$function__18_lambda();

            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_64);

                exception_lineno = 236;

                goto list_build_exception_2;
            }
            tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[143]);
            if (tmp_args_element_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_64);

                exception_lineno = 236;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
                tmp_args_element_value_63 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_44, call_args);
            }

            Py_DECREF(tmp_args_element_value_64);
            Py_DECREF(tmp_args_element_value_65);
            if (tmp_args_element_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);

                exception_lineno = 234;

                goto list_build_exception_2;
            }
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);

                exception_lineno = 238;

                goto list_build_exception_2;
            }


            tmp_args_element_value_67 = MAKE_FUNCTION_tray_ico$$$function__19_lambda();

            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_67);

                exception_lineno = 240;

                goto list_build_exception_2;
            }
            tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[144]);
            if (tmp_args_element_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_67);

                exception_lineno = 240;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 238;
            {
                PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
                tmp_args_element_value_66 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
            }

            Py_DECREF(tmp_args_element_value_67);
            Py_DECREF(tmp_args_element_value_68);
            if (tmp_args_element_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);

                exception_lineno = 238;

                goto list_build_exception_2;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);

                exception_lineno = 242;

                goto list_build_exception_2;
            }
            tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[109]);
            if (tmp_args_element_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);

                exception_lineno = 242;

                goto list_build_exception_2;
            }
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);

                exception_lineno = 243;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 243;
            tmp_args_element_value_70 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_46, &PyTuple_GET_ITEM(mod_consts[145], 0), mod_consts[133]);
            if (tmp_args_element_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);

                exception_lineno = 243;

                goto list_build_exception_2;
            }
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);

                exception_lineno = 246;

                goto list_build_exception_2;
            }


            tmp_tuple_element_5 = MAKE_FUNCTION_tray_ico$$$function__20_lambda();

            tmp_args_value_4 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_5);
            tmp_kwargs_value_4 = DICT_COPY(mod_consts[146]);
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 246;
            tmp_args_element_value_71 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            Py_DECREF(tmp_kwargs_value_4);
            if (tmp_args_element_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);

                exception_lineno = 246;

                goto list_build_exception_2;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);

                exception_lineno = 251;

                goto list_build_exception_2;
            }
            tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[109]);
            if (tmp_args_element_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);

                exception_lineno = 251;

                goto list_build_exception_2;
            }
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);

                exception_lineno = 252;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 252;
            tmp_args_element_value_73 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[147], 0), mod_consts[133]);
            if (tmp_args_element_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);

                exception_lineno = 252;

                goto list_build_exception_2;
            }
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);

                exception_lineno = 253;

                goto list_build_exception_2;
            }


            tmp_args_element_value_75 = MAKE_FUNCTION_tray_ico$$$function__21_lambda();

            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);

                exception_lineno = 255;

                goto list_build_exception_2;
            }
            tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[148]);
            if (tmp_args_element_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_75);

                exception_lineno = 255;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 253;
            {
                PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
                tmp_args_element_value_74 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
            }

            Py_DECREF(tmp_args_element_value_75);
            Py_DECREF(tmp_args_element_value_76);
            if (tmp_args_element_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_63);
                Py_DECREF(tmp_args_element_value_66);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);

                exception_lineno = 253;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 224;
            {
                PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_66, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74};
                tmp_args_element_value_56 = CALL_FUNCTION_WITH_ARGS12(tstate, tmp_called_value_40, call_args);
            }

            Py_DECREF(tmp_args_element_value_57);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_args_element_value_69);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_args_element_value_71);
            Py_DECREF(tmp_args_element_value_72);
            Py_DECREF(tmp_args_element_value_73);
            Py_DECREF(tmp_args_element_value_74);
            if (tmp_args_element_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 224;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
                tmp_args_element_value_54 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
            }

            Py_DECREF(tmp_args_element_value_56);
            if (tmp_args_element_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);

                exception_lineno = 222;

                goto list_build_exception_2;
            }
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 259;

                goto list_build_exception_2;
            }
            tmp_args_element_value_78 = mod_consts[149];
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 261;

                goto list_build_exception_2;
            }


            tmp_args_element_value_80 = MAKE_FUNCTION_tray_ico$$$function__22_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 261;
            tmp_args_element_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_80);
            Py_DECREF(tmp_args_element_value_80);
            if (tmp_args_element_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 261;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 259;
            {
                PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
                tmp_args_element_value_77 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_50, call_args);
            }

            Py_DECREF(tmp_args_element_value_79);
            if (tmp_args_element_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_46);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_49);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);

                exception_lineno = 259;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 204;
            {
                PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_77};
                tmp_args_element_value_45 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_32, call_args);
            }

            Py_DECREF(tmp_args_element_value_46);
            Py_DECREF(tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            Py_DECREF(tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_54);
            Py_DECREF(tmp_args_element_value_77);
            if (tmp_args_element_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
            }

            Py_DECREF(tmp_args_element_value_45);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 12, tmp_list_element_2);
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto list_build_exception_2;
            }
            tmp_args_element_value_81 = mod_consts[150];
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_2;
            }


            tmp_args_element_value_83 = MAKE_FUNCTION_tray_ico$$$function__23_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 269;
            tmp_args_element_value_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_83);
            Py_DECREF(tmp_args_element_value_83);
            if (tmp_args_element_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_52, call_args);
            }

            Py_DECREF(tmp_args_element_value_82);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 13, tmp_list_element_2);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 14, tmp_list_element_2);
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 274;
            tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_54, &PyTuple_GET_ITEM(mod_consts[151], 0), mod_consts[127]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 15, tmp_list_element_2);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_2;
            }
            tmp_args_element_value_84 = mod_consts[152];
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto list_build_exception_2;
            }
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_8 = MAKE_FUNCTION_tray_ico$$$function__24_lambda();

            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_8);

                exception_lineno = 280;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[153]);
            if (tmp_kw_call_dict_value_0_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_8);

                exception_lineno = 280;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 278;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_8};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
                tmp_args_element_value_86 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_57, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_8);
            Py_DECREF(tmp_kw_call_dict_value_0_8);
            if (tmp_args_element_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;

                goto list_build_exception_2;
            }
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);

                exception_lineno = 282;

                goto list_build_exception_2;
            }
            tmp_args_element_value_88 = mod_consts[154];
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);

                exception_lineno = 284;

                goto list_build_exception_2;
            }


            tmp_args_element_value_90 = MAKE_FUNCTION_tray_ico$$$function__25_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 284;
            tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_90);
            Py_DECREF(tmp_args_element_value_90);
            if (tmp_args_element_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);

                exception_lineno = 284;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 282;
            {
                PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
                tmp_args_element_value_87 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
            }

            Py_DECREF(tmp_args_element_value_89);
            if (tmp_args_element_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);

                exception_lineno = 282;

                goto list_build_exception_2;
            }
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);

                exception_lineno = 288;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_9 = MAKE_FUNCTION_tray_ico$$$function__26_lambda();

            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_kw_call_arg_value_0_9);

                exception_lineno = 290;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[155]);
            if (tmp_kw_call_dict_value_0_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_kw_call_arg_value_0_9);

                exception_lineno = 290;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 288;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_9};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
                tmp_args_element_value_91 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_60, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_9);
            Py_DECREF(tmp_kw_call_dict_value_0_9);
            if (tmp_args_element_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);

                exception_lineno = 288;

                goto list_build_exception_2;
            }
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 292;

                goto list_build_exception_2;
            }
            tmp_args_element_value_93 = mod_consts[156];
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 294;

                goto list_build_exception_2;
            }


            tmp_args_element_value_95 = MAKE_FUNCTION_tray_ico$$$function__27_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 294;
            tmp_args_element_value_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_95);
            Py_DECREF(tmp_args_element_value_95);
            if (tmp_args_element_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 294;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 292;
            {
                PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94};
                tmp_args_element_value_92 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
            }

            Py_DECREF(tmp_args_element_value_94);
            if (tmp_args_element_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_86);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 292;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 277;
            {
                PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_91, tmp_args_element_value_92};
                tmp_args_element_value_85 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_56, call_args);
            }

            Py_DECREF(tmp_args_element_value_86);
            Py_DECREF(tmp_args_element_value_87);
            Py_DECREF(tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_92);
            if (tmp_args_element_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 275;
            {
                PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_55, call_args);
            }

            Py_DECREF(tmp_args_element_value_85);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 16, tmp_list_element_2);
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto list_build_exception_2;
            }
            tmp_args_element_value_96 = mod_consts[157];
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto list_build_exception_2;
            }
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_10 = MAKE_FUNCTION_tray_ico$$$function__28_lambda();

            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_10);

                exception_lineno = 305;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[158]);
            if (tmp_kw_call_dict_value_0_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_10);

                exception_lineno = 305;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 303;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_10};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
                tmp_args_element_value_98 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_65, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_10);
            Py_DECREF(tmp_kw_call_dict_value_0_10);
            if (tmp_args_element_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;

                goto list_build_exception_2;
            }
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);

                exception_lineno = 307;

                goto list_build_exception_2;
            }
            tmp_args_element_value_100 = mod_consts[159];
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);

                exception_lineno = 309;

                goto list_build_exception_2;
            }


            tmp_args_element_value_102 = MAKE_FUNCTION_tray_ico$$$function__29_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 309;
            tmp_args_element_value_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_102);
            Py_DECREF(tmp_args_element_value_102);
            if (tmp_args_element_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);

                exception_lineno = 309;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101};
                tmp_args_element_value_99 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_66, call_args);
            }

            Py_DECREF(tmp_args_element_value_101);
            if (tmp_args_element_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);

                exception_lineno = 307;

                goto list_build_exception_2;
            }
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);

                exception_lineno = 313;

                goto list_build_exception_2;
            }


            tmp_kw_call_arg_value_0_11 = MAKE_FUNCTION_tray_ico$$$function__30_lambda();

            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_kw_call_arg_value_0_11);

                exception_lineno = 315;

                goto list_build_exception_2;
            }
            tmp_kw_call_dict_value_0_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[160]);
            if (tmp_kw_call_dict_value_0_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_kw_call_arg_value_0_11);

                exception_lineno = 315;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 313;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_11};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
                tmp_args_element_value_103 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_68, args, kw_values, mod_consts[118]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_11);
            Py_DECREF(tmp_kw_call_dict_value_0_11);
            if (tmp_args_element_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);

                exception_lineno = 313;

                goto list_build_exception_2;
            }
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_103);

                exception_lineno = 317;

                goto list_build_exception_2;
            }
            tmp_args_element_value_105 = mod_consts[161];
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_103);

                exception_lineno = 319;

                goto list_build_exception_2;
            }


            tmp_args_element_value_107 = MAKE_FUNCTION_tray_ico$$$function__31_lambda();

            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 319;
            tmp_args_element_value_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_107);
            Py_DECREF(tmp_args_element_value_107);
            if (tmp_args_element_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_103);

                exception_lineno = 319;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106};
                tmp_args_element_value_104 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_69, call_args);
            }

            Py_DECREF(tmp_args_element_value_106);
            if (tmp_args_element_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_98);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_103);

                exception_lineno = 317;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 302;
            {
                PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_103, tmp_args_element_value_104};
                tmp_args_element_value_97 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_64, call_args);
            }

            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_99);
            Py_DECREF(tmp_args_element_value_103);
            Py_DECREF(tmp_args_element_value_104);
            if (tmp_args_element_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 300;
            {
                PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_63, call_args);
            }

            Py_DECREF(tmp_args_element_value_97);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 17, tmp_list_element_2);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 18, tmp_list_element_2);
            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_71 == NULL)) {
                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto list_build_exception_2;
            }
            tmp_args_element_value_108 = mod_consts[162];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_2;
            }
            tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[163]);
            if (tmp_args_element_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
            }

            Py_DECREF(tmp_args_element_value_109);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 19, tmp_list_element_2);
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_3 = mod_consts[164];
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[165]);
            if (tmp_kw_call_value_1_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_2_3 = Py_True;
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 330;
            {
                PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_72, kw_values, mod_consts[125]);
            }

            Py_DECREF(tmp_kw_call_value_1_3);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 20, tmp_list_element_2);
            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_73 == NULL)) {
                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto list_build_exception_2;
            }
            tmp_args_element_value_110 = mod_consts[166];
            tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_args_element_value_111 == NULL)) {
                tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
            }

            if (tmp_args_element_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 333;
            {
                PyObject *call_args[] = {tmp_args_element_value_110, tmp_args_element_value_111};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_73, call_args);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 21, tmp_list_element_2);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto list_build_exception_2;
            }
            tmp_list_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[109]);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 22, tmp_list_element_2);
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto list_build_exception_2;
            }


            tmp_kw_call_value_0_4 = MAKE_FUNCTION_tray_ico$$$function__32_lambda();

            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);

                exception_lineno = 340;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[167]);
            if (tmp_kw_call_value_1_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_4);

                exception_lineno = 340;

                goto list_build_exception_2;
            }
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 338;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_74, kw_values, mod_consts[168]);
            }

            Py_DECREF(tmp_kw_call_value_0_4);
            Py_DECREF(tmp_kw_call_value_1_4);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 23, tmp_list_element_2);
            tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_called_value_75 == NULL)) {
                tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
            }

            if (tmp_called_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[93]);

            if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
                tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
            }

            if (tmp_kw_call_value_0_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_1_5 = Py_True;
            frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 343;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};
                tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_75, mod_consts[169], kw_values, mod_consts[127]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assign_source_56, 24, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assign_source_56);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_call_dict_value_0_12;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[76]);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_12 = mod_consts[171];
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = mod_consts[104];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_6);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_5;
            }
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[105]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_5;
            }
            tmp_format_spec_2 = mod_consts[84];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[172];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_kw_call_arg_value_2_1 = PyUnicode_Join(mod_consts[84], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_12 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_kw_call_dict_value_0_12 == NULL)) {
            tmp_kw_call_dict_value_0_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_kw_call_dict_value_0_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 347;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_76, args, kw_values, mod_consts[173]);
        }

        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_57);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_1;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 357;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_77);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_kw_call_dict_value_0_13;
        PyObject *tmp_tuple_element_7;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[174]);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[175]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_13 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_kw_call_arg_value_0_13 == NULL)) {
            tmp_kw_call_arg_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_kw_call_arg_value_0_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[102]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_13, 0, tmp_tuple_element_7);
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 362;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_78, args, kw_values, mod_consts[176]);
        }

        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_0_13);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_expression_value_47;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[174]);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[175]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_args_element_value_112 == NULL)) {
            tmp_args_element_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_args_element_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[177]);
        if (tmp_args_element_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_79, call_args);
        }

        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_mvar_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[174]);
        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[175]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_args_element_value_114 == NULL)) {
            tmp_args_element_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
        }

        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[178]);
        if (tmp_args_element_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = Py_False;
        UPDATE_STRING_DICT0(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;


        tmp_assign_source_59 = MAKE_FUNCTION_tray_ico$$$function__33_task_manager_click();

        UPDATE_STRING_DICT1(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_59);
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 391;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[180]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[174]);
        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[175]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = mod_consts[181];
        tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_args_element_value_117 == NULL)) {
            tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        frame_74cfca6e139ea5125e5b94a3be257254->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_81, call_args);
        }

        Py_DECREF(tmp_called_value_81);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74cfca6e139ea5125e5b94a3be257254, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74cfca6e139ea5125e5b94a3be257254->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74cfca6e139ea5125e5b94a3be257254, exception_lineno);
    }



    assertFrameObject(frame_74cfca6e139ea5125e5b94a3be257254);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("tray_ico", false);

#if defined(_NUITKA_MODULE) && 0
    PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "tray_ico" "-postLoad");
    if (post_load == NULL) {
        return NULL;
    }
#endif

    Py_INCREF(module_tray_ico);
    return module_tray_ico;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tray_ico, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("tray_ico", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
