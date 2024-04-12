void fun()
{
  int entity_9 = 16;
  entity_9 = 18;
  char* entity_6;
  char entity_2[60] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_2, 'R', 60-1);
  entity_2[60-1]='';
  memcpy(entity_6, entity_2, 60*sizeof(char));
}