void fun()
{
  int entity_0 = 84;
  char* entity_8;
  char entity_2 = 'x';
  char entity_4[83] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_4, 'H', 83-1);
  entity_4[83-1]='';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  entity_0 = 45;
  strcpy(entity_8, entity_4);
}