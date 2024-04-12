void fun()
{
  int entity_0 = 17;
  entity_0 = 4;
  char entity_2[81] = "";
  entity_2 = NULL;
  char entity_6[77] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_7[50] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'S', 50-1);
  entity_7[50-1]='';
  memset(entity_6, 'B', 77-1);
  entity_6[77-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_2, 'e', 81-1);
  entity_2[81-1]='';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  memcpy(entity_1, entity_7, 50*sizeof(char));
}