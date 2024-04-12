void fun()
{
  int entity_2 = 38;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'C', entity_2-1);
  entity_9[entity_2-1]='';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[54-1]='';
  memcpy(entity_6, entity_9, entity_2*sizeof(char));
}