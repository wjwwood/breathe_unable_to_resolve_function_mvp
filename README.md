Steps to reproduce:

- `python3 -m venv env && source env/bin/activate`
- `pip3 install -r requirements_warn.txt`
- `cd doc`
- `doxygen ./Doxyfile`
- `make html`

You should see the warning:

```
/path/to/breathe_unable_to_resolve_function_mvp/doc/source/index.rst:24: WARNING: doxygenfunction: Unable to resolve function "b" with arguments (void*, int (*)(void*, void*)) in doxygen xml output for project "API" from directory: ../doc_output/xml.
Potential matches:
- void b(void *ptr, int (*comp)(void*, void*))

```

Note that if package versions corresponding to `requirements_clean.txt` are installed (i.e. if `breathe <= 4.26.0`), then the `Unable to resolve function` warning is not produced.
