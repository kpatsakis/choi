void fun()
{
  int entity_9 = 89;
  int entity_3 = 45;
  entity_3 = 93;
  char* entity_7;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'U', entity_3-1);
  entity_6[entity_3-1]='';
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  memcpy(entity_7, entity_6, entity_3*sizeof(char));
}