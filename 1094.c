void fun()
{
  int entity_8 = 40;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  memset(entity_7, 'O', entity_8-1);
  entity_7[entity_8-1]='';
  memcpy(entity_9, entity_7, entity_8*sizeof(char));
}