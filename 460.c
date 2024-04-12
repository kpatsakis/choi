void fun()
{
  int entity_9 = 93;
  char* entity_3;
  char entity_5[93] = "";
  entity_5 = NULL;
  memset(entity_5, 'V', 93-1);
  entity_5[93-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memcpy(entity_3, entity_5, 93*sizeof(char));
}