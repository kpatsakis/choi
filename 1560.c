void fun()
{
  int entity_6 = 26;
  entity_6 = 6;
  char entity_0[98] = "";
  entity_0 = NULL;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_1;
  char entity_3 = 'A';
  char* entity_4;
  memset(entity_5, 'Z', entity_6-1);
  entity_5[entity_6-1]='';
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[69-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_0, 'o', 98-1);
  entity_0[98-1]='';
  memcpy(entity_1, entity_5, entity_6*sizeof(char));
}