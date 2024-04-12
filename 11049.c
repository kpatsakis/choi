void fun()
{
  int entity_2 = 79;
  char* entity_4;
  char entity_1[5] = "";
  memset(entity_1, 'o', 5-1);
  entity_1[5-1]='0';
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_1, 5*sizeof(char));
}