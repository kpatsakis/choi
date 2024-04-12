void fun()
{
  int entity_8 = 22;
  char* entity_2;
  char entity_4[64] = "";
  memset(entity_4, 'g', 64-1);
  entity_4[64-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_4);
}