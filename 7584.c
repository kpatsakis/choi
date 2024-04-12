void fun()
{
  int entity_6 = 57;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_2[34] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 34-1);
  entity_2[34-1]='';
  memset(entity_4, 'B', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 100;
  entity_4[94] = 'G';
}