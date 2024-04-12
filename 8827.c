void fun()
{
  int entity_1 = 14;
  char entity_8[94] = "";
  entity_8 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', entity_1-1);
  entity_4[entity_1-1]='';
  memset(entity_8, 'B', 94-1);
  entity_8[94-1]='';
  entity_1 = 32;
  entity_4[68] = 'W';
}