void fun()
{
  int entity_8 = 87;
  int entity_9 = 36;
  char* entity_6;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[64-1]='';
  memset(entity_3, 'U', entity_9-1);
  entity_3[entity_9-1]='';
  entity_3[24] = 'd';
}