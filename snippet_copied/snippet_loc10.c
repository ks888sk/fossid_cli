void** trampoline_variable (trampoline_function_t function)
{
#ifdef tramp_variable
  return (void**)(tramp_variable(((char*)function - TRAMP_BIAS)));
#else
  abort();
#endif
}

void* trampoline_data (trampoline_function_t function)
{
#ifdef tramp_data
  return (void*)(tramp_data(((char*)function - TRAMP_BIAS)));
#else
  abort();
#endif
}
