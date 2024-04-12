void fun()
{
  char entity_7[65] = "";
  entity_7 = NULL;
  memset(entity_7, 'X', 65-1);
  entity_7[65-1]='';
  entity_7[26] = 'Y';
}