void fun()
{
  int entity_9 = 46;
  char entity_0 = 'G';
  char* entity_6;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'M', entity_9-1);
  entity_8[entity_9-1]='';
  entity_6 = (char*)malloc(97*sizeof(char));
  entity_6[97-1]='';
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[88-1]='';
  entity_9 = 81;
  memcpy(entity_7, entity_8, entity_9*sizeof(char));
}