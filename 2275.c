void fun()
{
  char* entity_0;
  char* entity_4;
  char entity_3[8] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[60-1]='';
  entity_4 = (char*)malloc(36*sizeof(char));
  entity_4[36-1]='';
  memset(entity_3, 'A', 8-1);
  entity_3[8-1]='';
  memcpy(entity_0, entity_3, 8*sizeof(char));
}