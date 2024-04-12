void fun()
{
  char entity_4[46] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', 46-1);
  entity_4[46-1]='';
  entity_4[66] = 'b';
}