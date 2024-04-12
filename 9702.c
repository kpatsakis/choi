void fun()
{
  int entity_1 = 55;
  char entity_8[34] = "";
  entity_8 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memset(entity_8, 'G', 34-1);
  entity_8[34-1]='';
  memset(entity_3, 'O', entity_1-1);
  entity_3[entity_1-1]='';
  entity_1 = 43;
  memcpy(entity_9, entity_3, entity_1*sizeof(char));
}