void fun()
{
  int entity_3 = 67;
  char entity_9 = 'T';
  char* entity_1;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'T', entity_3-1);
  entity_5[entity_3-1]='';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  memcpy(entity_1, entity_5, entity_3*sizeof(char));
}