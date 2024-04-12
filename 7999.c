void fun()
{
  int entity_0 = 68;
  char* entity_1;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[53-1]='';
  memset(entity_4, 'D', entity_0-1);
  entity_4[entity_0-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  memcpy(entity_1, entity_4, entity_0*sizeof(char));
}