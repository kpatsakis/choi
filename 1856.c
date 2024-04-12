void fun()
{
  char entity_7 = 'T';
  char entity_8[71] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 71-1);
  entity_8[71-1]='';
  entity_8[81] = 'e';
}