void fun()
{
  char* entity_3;
  char entity_4[27] = "";
  entity_4 = NULL;
  char entity_0[28] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  memset(entity_4, 'y', 27-1);
  entity_4[27-1]='';
  memset(entity_0, 'I', 28-1);
  entity_0[28-1]='';
  memcpy(entity_3, entity_4, 27*sizeof(char));
}