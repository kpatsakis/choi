void fun()
{
  int entity_4 = 73;
  char entity_1[85] = "";
  entity_1 = NULL;
  char entity_2[34] = "";
  entity_2 = NULL;
  memset(entity_2, 'G', 34-1);
  entity_2[34-1]='';
  memset(entity_1, 'Q', 85-1);
  entity_1[85-1]='';
  entity_4 = 98;
  entity_1[entity_4] = 'F';
}