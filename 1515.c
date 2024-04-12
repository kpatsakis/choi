void fun()
{
  int entity_7 = 94;
  char entity_9[21] = "";
  entity_9 = NULL;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', entity_7-1);
  entity_1[entity_7-1]='';
  memset(entity_9, 'E', 21-1);
  entity_9[21-1]='';
  entity_1[37] = 'k';
}