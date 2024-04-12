void fun()
{
  char* entity_0;
  char* entity_1;
  char entity_6[42] = "";
  entity_6 = NULL;
  char entity_8[86] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 86-1);
  entity_8[86-1]='';
  entity_1 = (char*)malloc(39*sizeof(char));
  entity_1[39-1]='';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[90-1]='';
  memset(entity_6, 'v', 42-1);
  entity_6[42-1]='';
  memcpy(entity_1, entity_6, 42*sizeof(char));
}