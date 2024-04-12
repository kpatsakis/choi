void fun()
{
  char entity_6[73] = "";
  entity_6 = NULL;
  char entity_7[94] = "";
  entity_7 = NULL;
  memset(entity_6, 't', 73-1);
  entity_6[73-1]='';
  memset(entity_7, 'V', 94-1);
  entity_7[94-1]='';
  entity_6[31] = 'O';
}