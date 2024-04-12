void fun()
{
  int entity_9 = 30;
  char entity_3[17] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 17-1);
  entity_3[17-1]='';
  entity_3[entity_9] = 'I';
}