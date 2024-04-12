void fun()
{
  int entity_8 = 38;
  char entity_2[17] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'Y', 17-1);
  entity_2[17-1]='0';
  memcpy(entity_1, entity_2, 17*sizeof(char));
}