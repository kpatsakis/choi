void fun()
{
  int entity_3 = 96;
  char entity_9[22] = "";
  entity_9 = NULL;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'J', entity_3-1);
  entity_1[entity_3-1]='';
  memset(entity_9, 'l', 22-1);
  entity_9[22-1]='';
  entity_3 = 90;
  entity_1[54] = 'u';
}