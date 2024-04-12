void fun()
{
  int entity_8 = 88;
  char* entity_0;
  char entity_9[76] = "";
  char* entity_4;
  entity_0 = (char*)malloc(38*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(34*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'b', 76-1);
  entity_9[76-1]='0';
  strcpy(entity_0, entity_9);
}