void fun()
{
  int entity_3 = 85;
  char* entity_7;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  memset(entity_0, 'Q', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_9, entity_0, entity_3*sizeof(char));
}