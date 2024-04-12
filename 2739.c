void fun()
{
  int entity_9 = 8;
  char* entity_7;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'u', entity_9-1);
  entity_8[entity_9-1]='';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  memcpy(entity_7, entity_8, entity_9*sizeof(char));
}