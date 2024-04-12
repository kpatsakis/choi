void fun()
{
  char* entity_4;
  char* entity_1;
  char entity_2[63] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'K', 63-1);
  entity_2[63-1]='';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[17-1]='';
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[23-1]='';
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  memcpy(entity_0, entity_2, 63*sizeof(char));
}