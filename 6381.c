void fun()
{
  int entity_9 = 37;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'q', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 17;
  entity_4[58] = 'D';
}