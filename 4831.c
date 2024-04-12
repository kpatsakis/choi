void fun()
{
  char* entity_2;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_0;
  char* entity_8;
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[21-1]='';
  memset(entity_7, 'R', 96-1);
  entity_7[96-1]='';
  strcpy(entity_8, entity_7);
}