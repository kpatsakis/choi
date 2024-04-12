void fun()
{
  int entity_6 = 54;
  char entity_7[17] = "";
  entity_7 = NULL;
  char entity_1[20] = "";
  entity_1 = NULL;
  char entity_2[32] = "";
  entity_2 = NULL;
  memset(entity_7, 'u', 17-1);
  entity_7[17-1]='';
  memset(entity_2, 'q', 32-1);
  entity_2[32-1]='';
  memset(entity_1, 'W', 20-1);
  entity_1[20-1]='';
  entity_7[25] = 'd';
}