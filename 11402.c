void fun()
{
  int entity_4 = 18;
  char* entity_3;
  char entity_8[52] = "";
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'A', 52-1);
  entity_8[52-1]='0';
  strcpy(entity_3, entity_8);
}