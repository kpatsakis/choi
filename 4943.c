void fun()
{
  int entity_2 = 16;
  char entity_6[33] = "";
  entity_6 = NULL;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_3;
  char entity_0[47] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[79-1]='';
  memset(entity_6, 'A', 33-1);
  entity_6[33-1]='';
  memset(entity_0, 'F', 47-1);
  entity_0[47-1]='';
  memset(entity_1, 'Q', entity_2-1);
  entity_1[entity_2-1]='';
  entity_4 = (char*)malloc(5*sizeof(char));
  entity_4[5-1]='';
  entity_2 = 12;
  strcpy(entity_3, entity_1);
}