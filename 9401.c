void fun()
{
  int entity_5 = 27;
  entity_5 = 29;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_7[30] = "";
  entity_7 = NULL;
  memset(entity_6, 'C', entity_5-1);
  entity_6[entity_5-1]='';
  memset(entity_7, 'g', 30-1);
  entity_7[30-1]='';
  entity_6[51] = 'H';
}