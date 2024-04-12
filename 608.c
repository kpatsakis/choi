void fun()
{
  int entity_2 = 46;
  entity_2 = 16;
  char entity_8 = 'k';
  char entity_1[46] = "";
  entity_1 = NULL;
  memset(entity_1, 'Z', 46-1);
  entity_1[46-1]='';
  entity_1[entity_2] = 'Z';
}