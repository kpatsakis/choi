void fun()
{
  char entity_8[96] = "";
  entity_8 = NULL;
  memset(entity_8, 'w', 96-1);
  entity_8[96-1]='';
  entity_8[95] = 'm';
}