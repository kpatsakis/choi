void fun()
{
  int entity_2 = 72;
  int entity_7 = 85;
  char entity_8 = 'j';
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_4[95] = "";
  entity_4 = NULL;
  memset(entity_9, 'a', entity_7-1);
  entity_9[entity_7-1]='';
  memset(entity_4, 'd', 95-1);
  entity_4[95-1]='';
  entity_9[28] = 'V';
}