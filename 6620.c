void fun()
{
  int entity_4 = 92;
  entity_4 = 3;
  char entity_5[2] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', 2-1);
  entity_5[2-1]='';
  entity_5[entity_4] = 'H';
}