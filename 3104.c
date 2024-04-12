void fun()
{
  int entity_4 = 30;
  char entity_5 = 'D';
  char entity_3[63] = "";
  entity_3 = NULL;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_4-1);
  entity_2[entity_4-1]='';
  memset(entity_3, 'D', 63-1);
  entity_3[63-1]='';
  entity_4 = 30;
  entity_2[64] = 'p';
}