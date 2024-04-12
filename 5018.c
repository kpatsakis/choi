void fun()
{
  char entity_0[54] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_4;
  char entity_8[86] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[82-1]='';
  entity_4 = (char*)malloc(8*sizeof(char));
  entity_4[8-1]='';
  memset(entity_0, 'o', 54-1);
  entity_0[54-1]='';
  memset(entity_8, 'Q', 86-1);
  entity_8[86-1]='';
  memcpy(entity_2, entity_0, 54*sizeof(char));
}