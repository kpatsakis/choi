void fun()
{
  int entity_9 = 30;
  char* entity_2;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memset(entity_6, 'y', entity_9-1);
  entity_6[entity_9-1]='';
  memcpy(entity_2, entity_6, entity_9*sizeof(char));
}