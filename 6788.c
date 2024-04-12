void fun()
{
  int entity_9 = 54;
  int entity_6 = 58;
  char* entity_0;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'I', entity_9-1);
  entity_2[entity_9-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  memcpy(entity_0, entity_2, entity_9*sizeof(char));
}