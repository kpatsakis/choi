void fun()
{
  int entity_9 = 55;
  entity_9 = 55;
  char* entity_0;
  char* entity_7;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', entity_9-1);
  entity_8[entity_9-1]='';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[17-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  strcpy(entity_0, entity_8);
}