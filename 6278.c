void fun()
{
  int entity_4 = 2;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 33;
  entity_7[35] = 'W';
}