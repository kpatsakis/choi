void fun()
{
  int entity_3 = 88;
  char entity_9[90] = "";
  entity_9 = NULL;
  char entity_0[34] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_9, 'Q', 90-1);
  entity_9[90-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_0, 'u', 34-1);
  entity_0[34-1]='';
  memcpy(entity_4, entity_0, 34*sizeof(char));
}