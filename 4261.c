void fun()
{
  char* entity_1;
  char entity_8[85] = "";
  entity_8 = NULL;
  char entity_7[64] = "";
  entity_7 = NULL;
  char entity_3[85] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 85-1);
  entity_3[85-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  memset(entity_7, 'l', 64-1);
  entity_7[64-1]='';
  memset(entity_8, 'g', 85-1);
  entity_8[85-1]='';
  strcpy(entity_1, entity_3);
}