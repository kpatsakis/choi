void fun()
{
  int entity_2 = 94;
  char entity_6 = 'G';
  char* entity_4;
  char entity_0 = 'Z';
  char* entity_8;
  char entity_9[93] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(91*sizeof(char));
  entity_8[91-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_9, 'U', 93-1);
  entity_9[93-1]='';
  memcpy(entity_4, entity_9, 93*sizeof(char));
}