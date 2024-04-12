void fun()
{
  char* entity_0;
  char* entity_1;
  char entity_4[71] = "";
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'j', 71-1);
  entity_4[71-1]='0';
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_0, entity_4);
}