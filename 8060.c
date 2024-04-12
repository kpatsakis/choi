void fun()
{
  int entity_9 = 22;
  char entity_2[3] = "";
  entity_2 = NULL;
  memset(entity_2, 'y', 3-1);
  entity_2[3-1]='';
  entity_9 = 59;
  entity_2[entity_9] = 'C';
}