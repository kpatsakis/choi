void fun()
{
  int entity_4 = 56;
  int entity_7 = 2;
  int entity_5 = 61;
  int entity_9 = 75;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memset(entity_6, 'C', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 26;
  memcpy(entity_0, entity_6, entity_9*sizeof(char));
}