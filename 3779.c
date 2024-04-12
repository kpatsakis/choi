void fun()
{
  int entity_3 = 55;
  char entity_4[18] = "";
  entity_4 = NULL;
  char entity_2[83] = "";
  entity_2 = NULL;
  memset(entity_4, 'z', 18-1);
  entity_4[18-1]='';
  memset(entity_2, 'p', 83-1);
  entity_2[83-1]='';
  entity_2[entity_3] = 'o';
}