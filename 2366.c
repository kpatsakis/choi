void fun()
{
  char entity_0[34] = "";
  entity_0 = NULL;
  char entity_9 = 'l';
  char entity_5[33] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', 33-1);
  entity_5[33-1]='';
  memset(entity_0, 'K', 34-1);
  entity_0[34-1]='';
  entity_0[4] = 'l';
}