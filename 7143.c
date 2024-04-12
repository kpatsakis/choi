void fun()
{
  int entity_9 = 4;
  entity_9 = 18;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[26-1]='';
  memset(entity_7, 'V', entity_9-1);
  entity_7[entity_9-1]='';
  memcpy(entity_8, entity_7, entity_9*sizeof(char));
}