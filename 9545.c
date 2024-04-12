void fun()
{
  char entity_6 = 'R';
  char entity_0[44] = "";
  entity_0 = NULL;
  char entity_7[73] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_8;
  memset(entity_7, 'k', 73-1);
  entity_7[73-1]='';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[65-1]='';
  memset(entity_0, 'j', 44-1);
  entity_0[44-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  memcpy(entity_8, entity_0, 44*sizeof(char));
}