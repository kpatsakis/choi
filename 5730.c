void fun()
{
  int entity_4 = 19;
  entity_4 = 29;
  char* entity_9;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_5 = 'U';
  memset(entity_8, 'd', entity_4-1);
  entity_8[entity_4-1]='';
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[43-1]='';
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[9-1]='';
  memcpy(entity_9, entity_8, entity_4*sizeof(char));
}