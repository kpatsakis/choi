void fun()
{
  int entity_1 = 85;
  entity_1 = 85;
  char entity_7[12] = "";
  entity_7 = NULL;
  char entity_2[70] = "";
  entity_2 = NULL;
  char entity_5 = 's';
  char entity_6[69] = "";
  entity_6 = NULL;
  memset(entity_2, 'N', 70-1);
  entity_2[70-1]='';
  memset(entity_7, 'B', 12-1);
  entity_7[12-1]='';
  memset(entity_6, 'w', 69-1);
  entity_6[69-1]='';
  entity_7[entity_1] = 'W';
}