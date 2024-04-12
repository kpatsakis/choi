void fun()
{
  char entity_9[66] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', 66-1);
  entity_9[66-1]='';
  entity_9[53] = 'X';
}