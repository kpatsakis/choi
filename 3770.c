void fun()
{
  char entity_5[62] = "";
  entity_5 = NULL;
  char entity_4[4] = "";
  entity_4 = NULL;
  char entity_7 = 'e';
  memset(entity_4, 'C', 4-1);
  entity_4[4-1]='';
  memset(entity_5, 'L', 62-1);
  entity_5[62-1]='';
  entity_5[16] = 'I';
}