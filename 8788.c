void fun()
{
  int entity_5 = 57;
  int entity_4 = 58;
  char entity_1[3] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 3-1);
  entity_1[3-1]='';
  entity_5 = 62;
  entity_1[entity_5] = 'W';
}