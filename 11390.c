void fun()
{
  int entity_2 = 35;
  char* entity_5;
  char* entity_0;
  char entity_4[66] = "";
  char entity_9[73] = "";
  entity_5 = (char*)malloc(24*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'W', 73-1);
  entity_9[73-1]='0';
  memset(entity_4, 'd', 66-1);
  entity_4[66-1]='0';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}