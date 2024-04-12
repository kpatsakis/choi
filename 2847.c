void fun()
{
  char entity_4[43] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', 43-1);
  entity_4[43-1]='';
  entity_4[95] = 'I';
}