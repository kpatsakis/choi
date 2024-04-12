void fun()
{
  int entity_9 = 19;
  entity_9 = 75;
  char entity_2[87] = "";
  entity_2 = NULL;
  memset(entity_2, 's', 87-1);
  entity_2[87-1]='';
  entity_2[entity_9] = 'c';
}