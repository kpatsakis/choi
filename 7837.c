void fun()
{
  int entity_9 = 52;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(53*sizeof(char));
  entity_7[53-1]='';
  memset(entity_1, 'o', entity_9-1);
  entity_1[entity_9-1]='';
  entity_9 = 94;
  memcpy(entity_7, entity_1, entity_9*sizeof(char));
}