void fun()
{
  char entity_8[35] = "";
  entity_8 = NULL;
  memset(entity_8, 'x', 35-1);
  entity_8[35-1]='';
  entity_8[66] = 'F';
}