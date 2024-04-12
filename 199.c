void fun()
{
  int entity_9 = 88;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'l', entity_9-1);
  entity_8[entity_9-1]='';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  memcpy(entity_7, entity_8, entity_9*sizeof(char));
}