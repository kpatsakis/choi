void fun()
{
  int entity_3 = 82;
  int entity_1 = 1;
  entity_3 = 54;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_6 = 'H';
  char* entity_7;
  char entity_4[49] = "";
  entity_4 = NULL;
  memset(entity_4, 'o', 49-1);
  entity_4[49-1]='';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[4-1]='';
  memset(entity_9, 'U', entity_3-1);
  entity_9[entity_3-1]='';
  memcpy(entity_7, entity_9, entity_3*sizeof(char));
}