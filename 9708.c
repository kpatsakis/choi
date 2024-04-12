void fun()
{
  char entity_6[56] = "";
  entity_6 = NULL;
  char entity_3[56] = "";
  entity_3 = NULL;
  char entity_7[40] = "";
  entity_7 = NULL;
  memset(entity_6, 'r', 56-1);
  entity_6[56-1]='';
  memset(entity_3, 'b', 56-1);
  entity_3[56-1]='';
  memset(entity_7, 'U', 40-1);
  entity_7[40-1]='';
  entity_3[40] = 'X';
}