void fun()
{
  int entity_7 = 39;
  int entity_1 = 20;
  char* entity_6;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_4 = 'v';
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  memset(entity_9, 'e', entity_1-1);
  entity_9[entity_1-1]='';
  memcpy(entity_6, entity_9, entity_1*sizeof(char));
}