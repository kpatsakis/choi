void fun()
{
  int entity_2 = 57;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[29-1]='';
  memset(entity_9, 'X', entity_2-1);
  entity_9[entity_2-1]='';
  entity_2 = 56;
  memcpy(entity_0, entity_9, entity_2*sizeof(char));
}