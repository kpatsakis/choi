void fun()
{
  char* entity_2;
  char* entity_4;
  char entity_5[11] = "";
  entity_5 = NULL;
  char* entity_8;
  char* entity_6;
  memset(entity_5, 'q', 11-1);
  entity_5[11-1]='';
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[20-1]='';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[35-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  strcpy(entity_4, entity_5);
}