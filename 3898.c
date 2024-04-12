void fun()
{
  char entity_2 = 'Q';
  char entity_7[56] = "";
  entity_7 = NULL;
  char entity_3[41] = "";
  entity_3 = NULL;
  memset(entity_3, 'p', 41-1);
  entity_3[41-1]='';
  memset(entity_7, 'X', 56-1);
  entity_7[56-1]='';
  entity_3[38] = 'g';
}