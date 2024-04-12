void fun()
{
  int entity_9 = 78;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_7 = 'z';
  memset(entity_5, 'R', entity_9-1);
  entity_5[entity_9-1]='';
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  memcpy(entity_0, entity_5, entity_9*sizeof(char));
}