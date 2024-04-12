void fun()
{
  int entity_6 = 8;
  char entity_3[48] = "";
  entity_3 = NULL;
  char entity_1[70] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char entity_8 = 'Q';
  memset(entity_1, 'p', 70-1);
  entity_1[70-1]='';
  memset(entity_2, 'H', entity_6-1);
  entity_2[entity_6-1]='';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  memset(entity_3, 'n', 48-1);
  entity_3[48-1]='';
  memcpy(entity_4, entity_2, entity_6*sizeof(char));
}