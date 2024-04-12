void fun()
{
  int entity_9 = 33;
  int entity_1 = 97;
  char entity_7 = 'w';
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(73*sizeof(char));
  entity_0[73-1]='';
  memset(entity_4, 'n', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 15;
  memcpy(entity_0, entity_4, entity_9*sizeof(char));
}