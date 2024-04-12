void fun()
{
  int entity_9 = 76;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_5;
  char* entity_1;
  char* entity_3;
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  memset(entity_0, 'n', entity_9-1);
  entity_0[entity_9-1]='';
  entity_5 = (char*)malloc(99*sizeof(char));
  entity_5[99-1]='';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  strcpy(entity_5, entity_0);
}