void fun()
{
  int entity_9 = 67;
  int entity_3 = 63;
  entity_9 = 67;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_4;
  char entity_0 = 'f';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  memset(entity_8, 'C', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_4, entity_8);
}