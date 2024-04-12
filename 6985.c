void fun()
{
  int entity_8 = 61;
  char entity_5 = 'z';
  char* entity_1;
  char entity_2[7] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_2, 'K', 7-1);
  entity_2[7-1]='';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  entity_6 = (char*)malloc(69*sizeof(char));
  entity_6[69-1]='';
  memset(entity_0, 'I', entity_8-1);
  entity_0[entity_8-1]='';
  strcpy(entity_6, entity_0);
}