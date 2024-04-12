void fun()
{
  char entity_3[87] = "";
  entity_3 = NULL;
  char entity_5[23] = "";
  entity_5 = NULL;
  memset(entity_5, 'J', 23-1);
  entity_5[23-1]='';
  memset(entity_3, 'z', 87-1);
  entity_3[87-1]='';
  entity_5[91] = 'Y';
}