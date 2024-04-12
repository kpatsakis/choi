void fun()
{
  int entity_9 = 87;
  char entity_5 = 'P';
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char entity_4 = 'b';
  char* entity_0;
  char* entity_1;
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[54-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memset(entity_3, 'X', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_0, entity_3, entity_9*sizeof(char));
}