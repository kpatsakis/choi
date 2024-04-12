void fun()
{
  int entity_8 = 92;
  int entity_0 = 27;
  char entity_9[43] = "";
  entity_9 = NULL;
  char entity_2[49] = "";
  entity_2 = NULL;
  char* entity_3;
  char* entity_1;
  memset(entity_9, 'G', 43-1);
  entity_9[43-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[88-1]='';
  memset(entity_2, 'M', 49-1);
  entity_2[49-1]='';
  memcpy(entity_3, entity_2, 49*sizeof(char));
}