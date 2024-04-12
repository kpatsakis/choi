void fun()
{
  int entity_9 = 23;
  int entity_7 = 34;
  char entity_2[29] = "";
  entity_2 = NULL;
  memset(entity_2, 'v', 29-1);
  entity_2[29-1]='';
  entity_2[entity_7] = 'd';
}