void fun()
{
  int entity_9 = 23;
  entity_9 = 50;
  char entity_5 = 'z';
  char* entity_8;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  memset(entity_7, 'Q', entity_9-1);
  entity_7[entity_9-1]='';
  memcpy(entity_8, entity_7, entity_9*sizeof(char));
}