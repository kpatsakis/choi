void fun()
{
  int entity_0 = 94;
  entity_0 = 95;
  char* entity_6;
  char entity_9[20] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  entity_6 = (char*)malloc(66*sizeof(char));
  entity_6[66-1]='';
  memset(entity_9, 'u', 20-1);
  entity_9[20-1]='';
  memcpy(entity_5, entity_9, 20*sizeof(char));
}