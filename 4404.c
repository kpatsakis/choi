void fun()
{
  char entity_1[40] = "";
  entity_1 = NULL;
  char entity_8[85] = "";
  entity_8 = NULL;
  memset(entity_8, 'k', 85-1);
  entity_8[85-1]='';
  memset(entity_1, 'L', 40-1);
  entity_1[40-1]='';
  entity_1[71] = 'e';
}