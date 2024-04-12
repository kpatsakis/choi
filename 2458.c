void fun()
{
  int entity_3 = 81;
  char* entity_4;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_0 = 't';
  memset(entity_9, 'W', entity_3-1);
  entity_9[entity_3-1]='';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  memcpy(entity_4, entity_9, entity_3*sizeof(char));
}