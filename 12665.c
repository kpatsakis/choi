void fun()
{
  int entity_3 = 76;
  char entity_8[52] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'd', 52-1);
  entity_8[52-1]='0';
  strcpy(entity_4, entity_8);
}