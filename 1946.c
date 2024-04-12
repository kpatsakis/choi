void fun()
{
  int entity_7 = 25;
  char* entity_2;
  char entity_9[60] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  memset(entity_9, 'i', 60-1);
  entity_9[60-1]='';
  entity_7 = 73;
  memcpy(entity_2, entity_9, 60*sizeof(char));
}