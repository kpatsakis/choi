void fun()
{
  int entity_4 = 44;
  char entity_8 = 'i';
  char entity_2[66] = "";
  entity_2 = NULL;
  memset(entity_2, 'B', 66-1);
  entity_2[66-1]='';
  entity_2[entity_4] = 'j';
}