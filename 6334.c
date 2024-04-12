void fun()
{
  int entity_3 = 77;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_1[83] = "";
  entity_1 = NULL;
  char entity_9[69] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 69-1);
  entity_9[69-1]='';
  memset(entity_1, 'g', 83-1);
  entity_1[83-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_7, 'K', entity_3-1);
  entity_7[entity_3-1]='';
  entity_3 = 89;
  entity_7[43] = 'G';
}