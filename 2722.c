void fun()
{
  char entity_8[47] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', 47-1);
  entity_8[47-1]='';
  entity_8[66] = 'W';
}