void fun()
{
  char entity_8[46] = "";
  entity_8 = NULL;
  memset(entity_8, 'Q', 46-1);
  entity_8[46-1]='';
  entity_8[43] = 'g';
}