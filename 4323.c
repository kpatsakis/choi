void fun()
{
  int entity_5 = 9;
  int entity_0 = 36;
  char* entity_1;
  char entity_9[73] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_9, 'o', 73-1);
  entity_9[73-1]='';
  memcpy(entity_1, entity_9, 73*sizeof(char));
}