void fun()
{
  char* entity_0;
  char entity_7[80] = "";
  entity_7 = NULL;
  char entity_5 = 'Z';
  char* entity_8;
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  entity_8 = (char*)malloc(12*sizeof(char));
  entity_8[12-1]='';
  memset(entity_7, 'L', 80-1);
  entity_7[80-1]='';
  strcpy(entity_0, entity_7);
}