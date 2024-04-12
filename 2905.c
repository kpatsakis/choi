void fun()
{
  char entity_0[23] = "";
  entity_0 = NULL;
  char* entity_7;
  char entity_2[79] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  memset(entity_2, 'X', 79-1);
  entity_2[79-1]='';
  memset(entity_0, 'q', 23-1);
  entity_0[23-1]='';
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[2-1]='';
  memcpy(entity_8, entity_0, 23*sizeof(char));
}