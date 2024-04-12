void fun()
{
  int entity_3 = 31;
  char entity_1[36] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_9;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char entity_8[15] = "";
  entity_8 = NULL;
  memset(entity_2, 'B', entity_3-1);
  entity_2[entity_3-1]='';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memset(entity_1, 'z', 36-1);
  entity_1[36-1]='';
  memset(entity_8, 'D', 15-1);
  entity_8[15-1]='';
  memcpy(entity_6, entity_2, entity_3*sizeof(char));
}