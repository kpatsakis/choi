void fun()
{
  char entity_6[66] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', 66-1);
  entity_6[66-1]='';
  entity_6[98] = 'K';
}