void fun()
{
  int entity_2 = 86;
  int entity_0 = 89;
  char entity_9 = 'F';
  char entity_3[14] = "";
  entity_3 = NULL;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 16-1);
  entity_1[16-1]='';
  memset(entity_3, 'i', 14-1);
  entity_3[14-1]='';
  entity_1[entity_2] = 'X';
}