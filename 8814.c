void fun()
{
  int entity_3 = 70;
  char entity_4 = 'D';
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 38;
  entity_9[5] = 'B';
}