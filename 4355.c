void fun()
{
  int entity_1 = 58;
  char entity_7 = 'b';
  char entity_5 = 'b';
  char* entity_0;
  char* entity_4;
  char entity_9[51] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', 51-1);
  entity_9[51-1]='';
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  strcpy(entity_0, entity_9);
}