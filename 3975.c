void fun()
{
  int entity_2 = 57;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char entity_7[13] = "";
  entity_7 = NULL;
  char entity_1[22] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 22-1);
  entity_1[22-1]='';
  memset(entity_9, 'm', entity_2-1);
  entity_9[entity_2-1]='';
  memset(entity_7, 'v', 13-1);
  entity_7[13-1]='';
  entity_9[8] = 'e';
}