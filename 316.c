void fun()
{
  int entity_0 = 22;
  int entity_1 = 60;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'V', entity_0-1);
  entity_2[entity_0-1]='';
  entity_0 = 81;
  entity_2[63] = 'W';
}