void fun()
{
  int entity_6 = 16;
  char entity_5[27] = "";
  entity_5 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_2[27] = "";
  entity_2 = NULL;
  memset(entity_1, 'K', entity_6-1);
  entity_1[entity_6-1]='';
  memset(entity_2, 'A', 27-1);
  entity_2[27-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_5, 'e', 27-1);
  entity_5[27-1]='';
  entity_6 = 34;
  memcpy(entity_4, entity_1, entity_6*sizeof(char));
}