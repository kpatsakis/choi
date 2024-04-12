void fun()
{
  int entity_9 = 90;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', entity_9-1);
  entity_7[entity_9-1]='';
  entity_7[28] = 'j';
}