void fun()
{
  int entity_4 = 58;
  entity_4 = 89;
  char entity_7[30] = "";
  entity_7 = NULL;
  memset(entity_7, 'J', 30-1);
  entity_7[30-1]='';
  entity_7[entity_4] = 'W';
}