void fun()
{
  int entity_3 = 23;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_5[78] = "";
  entity_5 = NULL;
  memset(entity_8, 'G', entity_3-1);
  entity_8[entity_3-1]='';
  memset(entity_5, 'l', 78-1);
  entity_5[78-1]='';
  entity_8[42] = 'm';
}