void fun()
{
  int entity_3 = 49;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_5[79] = "";
  entity_5 = NULL;
  char entity_0 = 'E';
  char* entity_2;
  memset(entity_9, 'U', entity_3-1);
  entity_9[entity_3-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memset(entity_5, 'Q', 79-1);
  entity_5[79-1]='';
  memcpy(entity_2, entity_9, entity_3*sizeof(char));
}