void fun()
{
  char entity_8 = 'c';
  char entity_0[95] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'c', 95-1);
  entity_0[95-1]='';
  entity_5 = (char*)malloc(64*sizeof(char));
  entity_5[64-1]='';
  memcpy(entity_5, entity_0, 95*sizeof(char));
}