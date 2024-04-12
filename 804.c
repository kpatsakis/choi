void fun()
{
  int entity_9 = 45;
  entity_9 = 6;
  char* entity_6;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char entity_1 = 'y';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_4, 't', entity_9-1);
  entity_4[entity_9-1]='';
  memcpy(entity_6, entity_4, entity_9*sizeof(char));
}