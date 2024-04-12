void fun()
{
  int entity_3 = 38;
  char entity_8[86] = "";
  entity_8 = NULL;
  char entity_1[3] = "";
  entity_1 = NULL;
  char entity_7[93] = "";
  entity_7 = NULL;
  memset(entity_7, 'Z', 93-1);
  entity_7[93-1]='';
  memset(entity_1, 'G', 3-1);
  entity_1[3-1]='';
  memset(entity_8, 's', 86-1);
  entity_8[86-1]='';
  entity_7[entity_3] = 'G';
}