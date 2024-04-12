void fun()
{
  char entity_1[49] = "";
  entity_1 = NULL;
  char entity_2 = 'c';
  char* entity_0;
  entity_0 = (char*)malloc(16*sizeof(char));
  entity_0[16-1]='';
  memset(entity_1, 'q', 49-1);
  entity_1[49-1]='';
  strcpy(entity_0, entity_1);
}