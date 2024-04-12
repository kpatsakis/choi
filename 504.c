void fun()
{
  char entity_4[69] = "";
  entity_4 = NULL;
  char entity_8[15] = "";
  entity_8 = NULL;
  memset(entity_4, 'O', 69-1);
  entity_4[69-1]='';
  memset(entity_8, 'G', 15-1);
  entity_8[15-1]='';
  entity_4[52] = 'W';
}