void fun()
{
  int entity_9 = 98;
  char* entity_1;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'S', entity_9-1);
  entity_2[entity_9-1]='';
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memcpy(entity_1, entity_2, entity_9*sizeof(char));
}