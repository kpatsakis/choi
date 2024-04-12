void fun()
{
  char* entity_7;
  char entity_4[7] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_0 = 'Q';
  char* entity_5;
  memset(entity_4, 'R', 7-1);
  entity_4[7-1]='';
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[50-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  strcpy(entity_5, entity_4);
}