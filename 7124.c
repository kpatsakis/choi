void fun()
{
  int entity_1 = 14;
  char entity_4[68] = "";
  entity_4 = NULL;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_8 = 'g';
  memset(entity_4, 'J', 68-1);
  entity_4[68-1]='';
  memset(entity_9, 'r', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[28] = 'g';
}