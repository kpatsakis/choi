void fun()
{
  int entity_1 = 66;
  int entity_9 = 60;
  char entity_7[73] = "";
  entity_7 = NULL;
  memset(entity_7, 'i', 73-1);
  entity_7[73-1]='';
  entity_7[entity_1] = 's';
}