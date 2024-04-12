void fun()
{
  int entity_8 = 32;
  char entity_5[3] = "";
  entity_5 = NULL;
  char entity_2[48] = "";
  entity_2 = NULL;
  char entity_7 = 'p';
  memset(entity_5, 'v', 3-1);
  entity_5[3-1]='';
  memset(entity_2, 'i', 48-1);
  entity_2[48-1]='';
  entity_2[entity_8] = 'N';
}