void fun()
{
  int entity_3 = 82;
  int entity_5 = 22;
  char entity_9[39] = "";
  char* entity_4;
  char entity_6 = 'r';
  char* entity_0;
  memset(entity_9, 'r', 39-1);
  entity_9[39-1]='0';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[0]='0';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_9);
}