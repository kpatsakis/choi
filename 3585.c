void fun()
{
  char entity_7[12] = "";
  entity_7 = NULL;
  char entity_4[83] = "";
  entity_4 = NULL;
  char entity_2[34] = "";
  entity_2 = NULL;
  memset(entity_4, 'Y', 83-1);
  entity_4[83-1]='';
  memset(entity_2, 'Y', 34-1);
  entity_2[34-1]='';
  memset(entity_7, 'y', 12-1);
  entity_7[12-1]='';
  entity_7[40] = 'O';
}