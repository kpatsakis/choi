void fun()
{
  int entity_9 = 56;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  memset(entity_3, 'e', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_6, entity_3, entity_9*sizeof(char));
}