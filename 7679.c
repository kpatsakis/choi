void fun()
{
  int entity_4 = 90;
  entity_4 = 15;
  char entity_9[36] = "";
  entity_9 = NULL;
  memset(entity_9, 'W', 36-1);
  entity_9[36-1]='';
  entity_9[entity_4] = 'l';
}