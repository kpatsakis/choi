void fun()
{
  char entity_4[47] = "";
  entity_4 = NULL;
  char entity_8[48] = "";
  entity_8 = NULL;
  memset(entity_8, 'W', 48-1);
  entity_8[48-1]='';
  memset(entity_4, 'B', 47-1);
  entity_4[47-1]='';
  entity_4[12] = 'Y';
}