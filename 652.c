void fun()
{
  int entity_0 = 42;
  char* entity_9;
  char* entity_4;
  char entity_8[48] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[90-1]='';
  memset(entity_8, 'H', 48-1);
  entity_8[48-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[22-1]='';
  entity_0 = 13;
  strcpy(entity_9, entity_8);
}