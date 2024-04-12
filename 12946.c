void fun()
{
  int entity_1 = 37;
  int entity_7 = 52;
  char entity_6[36] = "";
  char* entity_0;
  memset(entity_6, 'v', 36-1);
  entity_6[36-1]='0';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_6);
}