void fun()
{
  int entity_3 = 43;
  entity_3 = 81;
  char* entity_1;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_9, 'P', entity_3-1);
  entity_9[entity_3-1]='';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  memcpy(entity_1, entity_9, entity_3*sizeof(char));
}