void fun()
{
  int entity_1 = 52;
  char entity_0 = 'B';
  char* entity_8;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char entity_7[39] = "";
  entity_7 = NULL;
  memset(entity_7, 'X', 39-1);
  entity_7[39-1]='';
  memset(entity_4, 'c', entity_1-1);
  entity_4[entity_1-1]='';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  entity_1 = 49;
  entity_4[28] = 'Q';
}