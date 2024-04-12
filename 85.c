void fun()
{
  int entity_0 = 53;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_4;
  memset(entity_9, 'j', entity_0-1);
  entity_9[entity_0-1]='';
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  entity_0 = 68;
  memcpy(entity_4, entity_9, entity_0*sizeof(char));
}