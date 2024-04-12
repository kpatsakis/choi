void fun()
{
  char entity_2[66] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 66-1);
  entity_2[66-1]='';
  entity_2[7] = 'p';
}