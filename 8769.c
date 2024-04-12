void fun()
{
  int entity_5 = 24;
  char* entity_4;
  char* entity_6;
  char entity_1[45] = "";
  entity_1 = NULL;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  memset(entity_1, 'i', 45-1);
  entity_1[45-1]='';
  memset(entity_8, 'g', entity_5-1);
  entity_8[entity_5-1]='';
  entity_4 = (char*)malloc(94*sizeof(char));
  entity_4[94-1]='';
  entity_5 = 23;
  memcpy(entity_6, entity_8, entity_5*sizeof(char));
}