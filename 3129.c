void fun()
{
  int entity_8 = 78;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char entity_1 = 'J';
  char* entity_4;
  memset(entity_9, 'V', entity_8-1);
  entity_9[entity_8-1]='';
  entity_4 = (char*)malloc(100*sizeof(char));
  entity_4[100-1]='';
  memcpy(entity_4, entity_9, entity_8*sizeof(char));
}