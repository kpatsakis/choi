void fun()
{
  int entity_3 = 32;
  char entity_2[61] = "";
  entity_2 = NULL;
  char entity_4[86] = "";
  entity_4 = NULL;
  memset(entity_4, 'Q', 86-1);
  entity_4[86-1]='';
  memset(entity_2, 'C', 61-1);
  entity_2[61-1]='';
  entity_2[entity_3] = 'D';
}