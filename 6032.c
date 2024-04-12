void fun()
{
  char entity_0[50] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', 50-1);
  entity_0[50-1]='';
  entity_0[22] = 'U';
}