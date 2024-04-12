void fun()
{
  char entity_3[66] = "";
  entity_3 = NULL;
  memset(entity_3, 'y', 66-1);
  entity_3[66-1]='';
  entity_3[74] = 's';
}