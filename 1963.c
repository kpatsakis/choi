void fun()
{
  int entity_4 = 82;
  int entity_2 = 85;
  char* entity_9;
  char entity_0[9] = "";
  entity_0 = NULL;
  memset(entity_0, 'm', 9-1);
  entity_0[9-1]='';
  entity_9 = (char*)malloc(93*sizeof(char));
  entity_9[93-1]='';
  memcpy(entity_9, entity_0, 9*sizeof(char));
}