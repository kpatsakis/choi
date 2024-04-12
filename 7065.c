void fun()
{
  int entity_5 = 49;
  char entity_2[0] = "";
  entity_2 = NULL;
  char entity_3[56] = "";
  entity_3 = NULL;
  char entity_8 = 'K';
  memset(entity_3, 'A', 56-1);
  entity_3[56-1]='';
  memset(entity_2, 'g', 0-1);
  entity_2[0-1]='';
  entity_3[34] = 'P';
}