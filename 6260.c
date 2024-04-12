void fun()
{
  int entity_4 = 95;
  int entity_9 = 13;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_0;
  char* entity_2;
  memset(entity_6, 'G', entity_9-1);
  entity_6[entity_9-1]='';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  entity_9 = 23;
  memcpy(entity_0, entity_6, entity_9*sizeof(char));
}