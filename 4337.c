void fun()
{
  int entity_6 = 37;
  char entity_7[86] = "";
  entity_7 = NULL;
  char entity_0[64] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', 64-1);
  entity_0[64-1]='';
  memset(entity_7, 'q', 86-1);
  entity_7[86-1]='';
  entity_0[entity_6] = 'a';
}