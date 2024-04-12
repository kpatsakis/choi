void fun()
{
  int entity_8 = 55;
  char entity_6 = 'd';
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_4;
  char* entity_9;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_0, 'q', entity_8-1);
  entity_0[entity_8-1]='';
  entity_8 = 2;
  strcpy(entity_9, entity_0);
}