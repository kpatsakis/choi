void fun()
{
  int entity_3 = 22;
  char* entity_9;
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', entity_3-1);
  entity_2[entity_3-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[80-1]='';
  entity_3 = 65;
  memcpy(entity_0, entity_2, entity_3*sizeof(char));
}