void fun()
{
  char entity_0[32] = "";
  entity_0 = NULL;
  memset(entity_0, 'e', 32-1);
  entity_0[32-1]='';
  entity_0[79] = 'b';
}