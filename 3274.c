void fun()
{
  char* entity_0;
  char* entity_1;
  char entity_8 = 'b';
  char entity_4[64] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  memset(entity_4, 'i', 64-1);
  entity_4[64-1]='';
  memcpy(entity_1, entity_4, 64*sizeof(char));
}