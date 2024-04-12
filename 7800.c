void fun()
{
  int entity_9 = 99;
  char entity_6[89] = "";
  entity_6 = NULL;
  memset(entity_6, 'E', 89-1);
  entity_6[89-1]='';
  entity_9 = 53;
  entity_6[entity_9] = 'o';
}