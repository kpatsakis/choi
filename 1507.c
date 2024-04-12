void fun()
{
  int entity_3 = 46;
  char* entity_9;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  memset(entity_7, 'O', entity_3-1);
  entity_7[entity_3-1]='';
  memcpy(entity_9, entity_7, entity_3*sizeof(char));
}