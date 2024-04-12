void fun()
{
  int entity_2 = 45;
  char* entity_8;
  char entity_0[66] = "";
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'l', 66-1);
  entity_0[66-1]='0';
  strcpy(entity_8, entity_0);
}