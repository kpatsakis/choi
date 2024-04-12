void fun()
{
  int entity_8 = 40;
  char* entity_3;
  char entity_4[100] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_6 = 'y';
  char* entity_7;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_3 = (char*)malloc(50*sizeof(char));
  entity_3[50-1]='';
  entity_7 = (char*)malloc(89*sizeof(char));
  entity_7[89-1]='';
  memset(entity_4, 'n', 100-1);
  entity_4[100-1]='';
  strcpy(entity_1, entity_4);
}