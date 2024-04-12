void fun()
{
  int entity_9 = 60;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_7[77] = "";
  entity_7 = NULL;
  memset(entity_7, 'R', 77-1);
  entity_7[77-1]='';
  memset(entity_8, 'Z', entity_9-1);
  entity_8[entity_9-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  entity_9 = 46;
  memcpy(entity_4, entity_8, entity_9*sizeof(char));
}