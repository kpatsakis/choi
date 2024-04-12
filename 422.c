void fun()
{
  int entity_8 = 16;
  entity_8 = 16;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_4;
  char entity_9 = 'F';
  memset(entity_7, 'r', entity_8-1);
  entity_7[entity_8-1]='';
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[76-1]='';
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[10-1]='';
  strcpy(entity_0, entity_7);
}