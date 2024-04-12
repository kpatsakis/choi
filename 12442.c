void fun()
{
  int entity_0 = 11;
  char* entity_8;
  char entity_7 = 't';
  char entity_9[73] = "";
  char* entity_1;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[0]='0';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'E', 73-1);
  entity_9[73-1]='0';
  strcpy(entity_8, entity_9);
}