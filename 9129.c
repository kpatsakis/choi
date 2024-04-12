void fun()
{
  int entity_6 = 57;
  int entity_9 = 55;
  entity_9 = 33;
  char entity_4[5] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', 5-1);
  entity_4[5-1]='';
  entity_4[entity_9] = 'W';
}