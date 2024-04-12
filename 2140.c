void fun()
{
  char entity_5[27] = "";
  entity_5 = NULL;
  memset(entity_5, 'z', 27-1);
  entity_5[27-1]='';
  entity_5[40] = 'C';
}