void fun()
{
  int entity_6 = 1;
  entity_6 = 56;
  char entity_9[13] = "";
  entity_9 = NULL;
  memset(entity_9, 'N', 13-1);
  entity_9[13-1]='';
  entity_9[entity_6] = 'M';
}