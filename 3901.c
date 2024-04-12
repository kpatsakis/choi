void fun()
{
  char entity_2[96] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_0;
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  memset(entity_2, 'h', 96-1);
  entity_2[96-1]='';
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[49-1]='';
  memcpy(entity_0, entity_2, 96*sizeof(char));
}