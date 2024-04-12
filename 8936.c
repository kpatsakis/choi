void fun()
{
  int entity_9 = 56;
  char entity_0[33] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_5;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  memset(entity_0, 'L', 33-1);
  entity_0[33-1]='';
  memcpy(entity_2, entity_0, 33*sizeof(char));
}