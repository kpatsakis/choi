void fun()
{
  char* entity_0;
  char entity_5[15] = "";
  char* entity_8;
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'Q', 15-1);
  entity_5[15-1]='0';
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}