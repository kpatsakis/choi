void fun()
{
  char* entity_0;
  char entity_8[90] = "";
  entity_8 = NULL;
  char entity_5[29] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 29-1);
  entity_5[29-1]='';
  memset(entity_8, 'I', 90-1);
  entity_8[90-1]='';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[20-1]='';
  memcpy(entity_0, entity_8, 90*sizeof(char));
}