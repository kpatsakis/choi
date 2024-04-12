void fun()
{
  int entity_8 = 54;
  int entity_6 = 12;
  int entity_4 = 12;
  entity_8 = 40;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[83] = 'R';
}