void fun()
{
  int entity_2 = 67;
  int entity_4 = 21;
  char entity_5[36] = "";
  entity_5 = NULL;
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_7[31] = "";
  entity_7 = NULL;
  memset(entity_1, 'u', 24-1);
  entity_1[24-1]='';
  memset(entity_5, 'V', 36-1);
  entity_5[36-1]='';
  memset(entity_7, 'w', 31-1);
  entity_7[31-1]='';
  entity_5[entity_2] = 'K';
}