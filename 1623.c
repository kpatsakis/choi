void fun()
{
  int entity_1 = 6;
  entity_1 = 65;
  char entity_3 = 'X';
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_4[74] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', 74-1);
  entity_4[74-1]='';
  memset(entity_5, 'Y', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[12] = 'G';
}