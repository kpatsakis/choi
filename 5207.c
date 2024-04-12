void fun()
{
  int entity_1 = 21;
  entity_1 = 48;
  char entity_3[4] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', 4-1);
  entity_3[4-1]='';
  entity_3[entity_1] = 'r';
}