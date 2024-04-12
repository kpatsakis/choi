void fun()
{
  int entity_9 = 85;
  entity_9 = 96;
  char entity_5[25] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 25-1);
  entity_5[25-1]='';
  entity_5[entity_9] = 'k';
}