void fun()
{
  int entity_2 = 33;
  int entity_9 = 16;
  entity_9 = 9;
  char entity_3 = 'c';
  char* entity_4;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 't', entity_9-1);
  entity_5[entity_9-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  memcpy(entity_4, entity_5, entity_9*sizeof(char));
}