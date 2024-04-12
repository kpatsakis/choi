void fun()
{
  int entity_9 = 2;
  entity_9 = 44;
  char* entity_7;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[76-1]='';
  memset(entity_5, 'q', entity_9-1);
  entity_5[entity_9-1]='';
  memcpy(entity_7, entity_5, entity_9*sizeof(char));
}