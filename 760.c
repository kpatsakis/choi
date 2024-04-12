void fun()
{
  int entity_5 = 5;
  int entity_3 = 54;
  int entity_8 = 42;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char entity_7[98] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', 98-1);
  entity_7[98-1]='';
  memset(entity_0, 'V', entity_8-1);
  entity_0[entity_8-1]='';
  entity_0[2] = 'm';
}