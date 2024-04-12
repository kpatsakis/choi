void fun()
{
  int entity_3 = 16;
  entity_3 = 89;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'N', entity_3-1);
  entity_0[entity_3-1]='';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  memcpy(entity_4, entity_0, entity_3*sizeof(char));
}