void fun()
{
  int entity_0 = 65;
  char entity_2[34] = "";
  entity_2 = NULL;
  char entity_3[2] = "";
  entity_3 = NULL;
  char entity_4[90] = "";
  entity_4 = NULL;
  memset(entity_3, 'W', 2-1);
  entity_3[2-1]='';
  memset(entity_4, 'r', 90-1);
  entity_4[90-1]='';
  memset(entity_2, 'd', 34-1);
  entity_2[34-1]='';
  entity_0 = 100;
  entity_2[entity_0] = 'l';
}