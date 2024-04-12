void fun()
{
  int entity_9 = 75;
  char* entity_0;
  char entity_6[3] = "";
  entity_6 = NULL;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_6, 'r', 3-1);
  entity_6[3-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  memset(entity_2, 'r', entity_9-1);
  entity_2[entity_9-1]='';
  memcpy(entity_0, entity_2, entity_9*sizeof(char));
}