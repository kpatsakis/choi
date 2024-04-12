void fun()
{
  int entity_9 = 4;
  entity_9 = 69;
  char* entity_7;
  char entity_5[5] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 5-1);
  entity_5[5-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memcpy(entity_7, entity_5, 5*sizeof(char));
}