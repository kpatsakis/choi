void fun()
{
  int entity_8 = 14;
  entity_8 = 80;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_6 = 'Z';
  char entity_2[41] = "";
  entity_2 = NULL;
  memset(entity_9, 'V', entity_8-1);
  entity_9[entity_8-1]='';
  memset(entity_2, 'u', 41-1);
  entity_2[41-1]='';
  entity_9[79] = 'r';
}