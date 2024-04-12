void fun()
{
  int entity_0 = 19;
  char* entity_9;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(68*sizeof(char));
  entity_9[68-1]='';
  memset(entity_4, 'P', entity_0-1);
  entity_4[entity_0-1]='';
  memcpy(entity_9, entity_4, entity_0*sizeof(char));
}