void fun()
{
  char* entity_6;
  char entity_0 = 'q';
  char* entity_3;
  char entity_5[85] = "";
  entity_5 = NULL;
  char entity_1[97] = "";
  entity_1 = NULL;
  memset(entity_5, 'L', 85-1);
  entity_5[85-1]='';
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[64-1]='';
  memset(entity_1, 's', 97-1);
  entity_1[97-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  memcpy(entity_3, entity_5, 85*sizeof(char));
}