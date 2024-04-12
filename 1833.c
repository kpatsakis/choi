void fun()
{
  char entity_2[87] = "";
  entity_2 = NULL;
  memset(entity_2, 'V', 87-1);
  entity_2[87-1]='';
  entity_2[47] = 'm';
}