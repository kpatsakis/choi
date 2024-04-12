void fun()
{
  int entity_4 = 47;
  char entity_1[74] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', 74-1);
  entity_1[74-1]='';
  entity_1[entity_4] = 'U';
}