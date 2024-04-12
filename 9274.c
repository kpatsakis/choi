void fun()
{
  int entity_4 = 58;
  int entity_9 = 77;
  char entity_6[75] = "";
  entity_6 = NULL;
  memset(entity_6, 'x', 75-1);
  entity_6[75-1]='';
  entity_6[entity_9] = 'l';
}