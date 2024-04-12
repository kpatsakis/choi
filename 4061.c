void fun()
{
  int entity_6 = 14;
  char* entity_9;
  char entity_4[73] = "";
  entity_4 = NULL;
  memset(entity_4, 'j', 73-1);
  entity_4[73-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  entity_6 = 42;
  memcpy(entity_9, entity_4, 73*sizeof(char));
}