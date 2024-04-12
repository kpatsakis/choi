void fun()
{
  int entity_5 = 37;
  int entity_9 = 44;
  char entity_8 = 'F';
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'b', entity_9-1);
  entity_1[entity_9-1]='';
  entity_1[48] = 'R';
}