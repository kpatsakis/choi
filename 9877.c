void fun()
{
  int entity_8 = 36;
  int entity_6 = 53;
  entity_8 = 52;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char entity_9[42] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', 42-1);
  entity_9[42-1]='';
  memset(entity_1, 'E', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[42] = 'd';
}