void fun()
{
  int entity_5 = 40;
  char entity_0[33] = "";
  entity_0 = NULL;
  char entity_2 = 'V';
  memset(entity_0, 'Z', 33-1);
  entity_0[33-1]='';
  entity_0[entity_5] = 's';
}