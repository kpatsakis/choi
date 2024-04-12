void fun()
{
  char entity_0[34] = "";
  entity_0 = NULL;
  memset(entity_0, 'h', 34-1);
  entity_0[34-1]='';
  entity_0[51] = 'x';
}