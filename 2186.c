void fun()
{
  int entity_0 = 73;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_2;
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[93-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  memset(entity_6, 'Z', entity_0-1);
  entity_6[entity_0-1]='';
  memcpy(entity_4, entity_6, entity_0*sizeof(char));
}