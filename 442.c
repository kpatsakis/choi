void fun()
{
  int entity_8 = 98;
  int entity_2 = 77;
  char entity_9[90] = "";
  entity_9 = NULL;
  memset(entity_9, 'h', 90-1);
  entity_9[90-1]='';
  entity_9[entity_8] = 'l';
}