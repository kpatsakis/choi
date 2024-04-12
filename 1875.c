void fun()
{
  int entity_2 = 99;
  char entity_3[24] = "";
  entity_3 = NULL;
  char entity_4 = 'M';
  memset(entity_3, 'a', 24-1);
  entity_3[24-1]='';
  entity_2 = 38;
  entity_3[entity_2] = 'z';
}