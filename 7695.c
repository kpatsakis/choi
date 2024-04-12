void fun()
{
  int entity_7 = 78;
  int entity_3 = 29;
  char entity_8[55] = "";
  entity_8 = NULL;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_8, 'A', 55-1);
  entity_8[55-1]='';
  memset(entity_9, 'G', entity_7-1);
  entity_9[entity_7-1]='';
  entity_9[27] = 'Y';
}