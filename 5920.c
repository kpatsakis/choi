void fun()
{
  int entity_9 = 81;
  char entity_7[13] = "";
  entity_7 = NULL;
  memset(entity_7, 'k', 13-1);
  entity_7[13-1]='';
  entity_7[entity_9] = 'u';
}