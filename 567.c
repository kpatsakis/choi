void fun()
{
  char* entity_0;
  char entity_8[34] = "";
  entity_8 = NULL;
  char entity_4[2] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[97-1]='';
  memset(entity_8, 'N', 34-1);
  entity_8[34-1]='';
  memset(entity_4, 'W', 2-1);
  entity_4[2-1]='';
  memcpy(entity_0, entity_4, 2*sizeof(char));
}