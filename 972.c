void fun()
{
  char entity_6[85] = "";
  entity_6 = NULL;
  char entity_8[87] = "";
  entity_8 = NULL;
  memset(entity_8, 'b', 87-1);
  entity_8[87-1]='';
  memset(entity_6, 'H', 85-1);
  entity_6[85-1]='';
  entity_8[67] = 'h';
}