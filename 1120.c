void fun()
{
  int entity_2 = 62;
  char* entity_8;
  char* entity_9;
  char entity_5[12] = "";
  entity_5 = NULL;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_4 = 'Q';
  entity_8 = (char*)malloc(69*sizeof(char));
  entity_8[69-1]='';
  memset(entity_5, 'A', 12-1);
  entity_5[12-1]='';
  memset(entity_6, 'd', entity_2-1);
  entity_6[entity_2-1]='';
  entity_9 = (char*)malloc(70*sizeof(char));
  entity_9[70-1]='';
  entity_2 = 97;
  memcpy(entity_8, entity_6, entity_2*sizeof(char));
}