void fun()
{
  int entity_3 = 47;
  int entity_6 = 39;
  char entity_8 = 'z';
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'P', entity_3-1);
  entity_1[entity_3-1]='';
  entity_3 = 92;
  entity_1[61] = 's';
}