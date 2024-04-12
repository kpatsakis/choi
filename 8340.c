void fun()
{
  int entity_8 = 80;
  int entity_4 = 73;
  int entity_3 = 53;
  char entity_2[76] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 76-1);
  entity_2[76-1]='';
  entity_2[entity_3] = 'Y';
}