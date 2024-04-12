void fun()
{
  int entity_7 = 53;
  char* entity_9;
  char entity_5[47] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_5, 'A', 47-1);
  entity_5[47-1]='';
  entity_7 = 94;
  memcpy(entity_9, entity_5, 47*sizeof(char));
}