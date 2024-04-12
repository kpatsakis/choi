void fun()
{
  int entity_6 = 85;
  int entity_1 = 14;
  char* entity_4;
  char entity_0[50] = "";
  memset(entity_0, 't', 50-1);
  entity_0[50-1]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_0);
}