void fun()
{
  int entity_7 = 2;
  entity_7 = 53;
  char entity_8[18] = "";
  entity_8 = NULL;
  char entity_9[75] = "";
  entity_9 = NULL;
  memset(entity_8, 'g', 18-1);
  entity_8[18-1]='';
  memset(entity_9, 'C', 75-1);
  entity_9[75-1]='';
  entity_9[entity_7] = 'V';
}