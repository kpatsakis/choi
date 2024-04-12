void fun()
{
  int entity_9 = 67;
  char* entity_8;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_2[20] = "";
  entity_2 = NULL;
  memset(entity_2, 'W', 20-1);
  entity_2[20-1]='';
  memset(entity_0, 'S', entity_9-1);
  entity_0[entity_9-1]='';
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  entity_9 = 46;
  memcpy(entity_8, entity_0, entity_9*sizeof(char));
}