void fun()
{
  int entity_0 = 55;
  char* entity_9;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_9 = (char*)malloc(79*sizeof(char));
  entity_9[79-1]='';
  memset(entity_4, 'R', entity_0-1);
  entity_4[entity_0-1]='';
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[57-1]='';
  strcpy(entity_8, entity_4);
}