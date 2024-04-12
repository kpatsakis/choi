void fun()
{
  int entity_9 = 71;
  entity_9 = 68;
  char entity_3[9] = "";
  entity_3 = NULL;
  memset(entity_3, 'r', 9-1);
  entity_3[9-1]='';
  entity_3[entity_9] = 'u';
}