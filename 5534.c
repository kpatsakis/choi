void fun()
{
  int entity_1 = 71;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_7[70] = "";
  entity_7 = NULL;
  char entity_9[49] = "";
  entity_9 = NULL;
  memset(entity_2, 'F', entity_1-1);
  entity_2[entity_1-1]='';
  memset(entity_7, 'J', 70-1);
  entity_7[70-1]='';
  memset(entity_9, 'c', 49-1);
  entity_9[49-1]='';
  entity_2[59] = 'p';
}