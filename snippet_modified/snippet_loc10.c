void** trampoline_variable (trampoline_function_t function)
{
  return (void**)(tramp_variable(((char*)function - TRAMP_BIAS)));
}

void* trampoline_data (trampoline_function_t function)
{
  return (void*)(tramp_data(((char*)function - TRAMP_BIAS)));
}
