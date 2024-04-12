void fun()
{
  char* entity_7;
  char entity_6[93] = "";
  entity_6 = NULL;
  char* entity_3;
  char* entity_8;
  memset(entity_6, 't', 93-1);
  entity_6[93-1]='';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[65-1]='';
  strcpy(entity_3, entity_6);
}