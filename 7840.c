void fun()
{
  int entity_6 = 11;
  int entity_5 = 42;
  char entity_4[85] = "";
  entity_4 = NULL;
  char entity_0[46] = "";
  entity_0 = NULL;
  memset(entity_4, 'T', 85-1);
  entity_4[85-1]='';
  memset(entity_0, 'U', 46-1);
  entity_0[46-1]='';
  entity_4[entity_5] = 'U';
}