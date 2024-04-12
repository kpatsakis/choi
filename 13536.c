void fun()
{
  int entity_1 = 26;
  entity_1 = 41;
  char* entity_4;
  char entity_2[6] = "";
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'd', 6-1);
  entity_2[6-1]='0';
  strcpy(entity_4, entity_2);
}