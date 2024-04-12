void fun()
{
  int entity_9 = 6;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_4;
  char* entity_0;
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_3, 'y', entity_9-1);
  entity_3[entity_9-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  strcpy(entity_4, entity_3);
}