void fun()
{
  int entity_7 = 74;
  char entity_9[90] = "";
  entity_9 = NULL;
  memset(entity_9, 'l', 90-1);
  entity_9[90-1]='';
  entity_7 = 58;
  entity_9[entity_7] = 'S';
}