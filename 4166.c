void fun()
{
  int entity_7 = 3;
  int entity_0 = 91;
  int entity_1 = 67;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'i', entity_7-1);
  entity_4[entity_7-1]='';
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  memcpy(entity_9, entity_4, entity_7*sizeof(char));
}