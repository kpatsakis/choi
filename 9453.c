void fun()
{
  char entity_4[48] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', 48-1);
  entity_4[48-1]='';
  entity_4[66] = 'G';
}