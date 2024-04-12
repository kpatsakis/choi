void fun()
{
  int entity_8 = 95;
  char* entity_0;
  char* entity_1;
  char entity_5[100] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[81-1]='';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[14-1]='';
  memset(entity_5, 'Z', 100-1);
  entity_5[100-1]='';
  entity_5[30] = 'U';
}