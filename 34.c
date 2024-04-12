void fun()
{
  int entity_4 = 47;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'P', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[66] = 'W';
}