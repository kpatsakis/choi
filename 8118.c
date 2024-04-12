void fun()
{
  int entity_4 = 70;
  int entity_1 = 66;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'C', entity_1-1);
  entity_3[entity_1-1]='';
  entity_1 = 79;
  entity_3[15] = 'd';
}