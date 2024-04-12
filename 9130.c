void fun()
{
  int entity_9 = 42;
  char* entity_7;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  memset(entity_2, 'K', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 90;
  memcpy(entity_7, entity_2, entity_9*sizeof(char));
}