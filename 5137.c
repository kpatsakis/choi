void fun()
{
  int entity_8 = 51;
  char entity_5[96] = "";
  entity_5 = NULL;
  char* entity_0;
  char* entity_4;
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  memset(entity_5, 'N', 96-1);
  entity_5[96-1]='';
  entity_0 = (char*)malloc(20*sizeof(char));
  entity_0[20-1]='';
  strcpy(entity_4, entity_5);
}