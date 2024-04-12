void fun()
{
  int entity_6 = 74;
  char* entity_9;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  memset(entity_1, 'y', entity_6-1);
  entity_1[entity_6-1]='';
  entity_6 = 64;
  memcpy(entity_9, entity_1, entity_6*sizeof(char));
}