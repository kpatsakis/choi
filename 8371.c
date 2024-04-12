void fun()
{
  int entity_4 = 100;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_9;
  char entity_8[15] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[73-1]='';
  memset(entity_1, 'g', entity_4-1);
  entity_1[entity_4-1]='';
  memset(entity_8, 'L', 15-1);
  entity_8[15-1]='';
  memcpy(entity_9, entity_1, entity_4*sizeof(char));
}