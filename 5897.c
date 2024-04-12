void fun()
{
  int entity_8 = 56;
  char entity_1 = 'w';
  char entity_2[99] = "";
  entity_2 = NULL;
  char entity_4[94] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 94-1);
  entity_4[94-1]='';
  memset(entity_2, 'd', 99-1);
  entity_2[99-1]='';
  entity_8 = 83;
  entity_4[entity_8] = 'U';
}