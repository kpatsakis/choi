void fun()
{
  char entity_5[27] = "";
  entity_5 = NULL;
  char entity_7[85] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', 85-1);
  entity_7[85-1]='';
  memset(entity_5, 'I', 27-1);
  entity_5[27-1]='';
  entity_5[87] = 'Y';
}