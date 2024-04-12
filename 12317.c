void fun()
{
  int entity_7 = 20;
  int entity_5 = 44;
  char* entity_4;
  char entity_1[52] = "";
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memset(entity_1, 't', 52-1);
  entity_1[52-1]='0';
  strcpy(entity_4, entity_1);
}