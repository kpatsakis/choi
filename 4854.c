void fun()
{
  int entity_2 = 61;
  char* entity_6;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  memset(entity_9, 'f', entity_2-1);
  entity_9[entity_2-1]='';
  memcpy(entity_6, entity_9, entity_2*sizeof(char));
}