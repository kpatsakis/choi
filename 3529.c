void fun()
{
  int entity_9 = 43;
  char entity_8[40] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 40-1);
  entity_8[40-1]='';
  entity_8[entity_9] = 'W';
}