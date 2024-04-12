void fun()
{
  int entity_6 = 46;
  char entity_1[66] = "";
  entity_1 = NULL;
  memset(entity_1, 'D', 66-1);
  entity_1[66-1]='';
  entity_1[entity_6] = 'X';
}