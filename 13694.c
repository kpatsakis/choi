void fun()
{
  int entity_4 = 44;
  char entity_1[89] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'H', 89-1);
  entity_1[89-1]='0';
  entity_4 = 64;
  memcpy(entity_3, entity_1, 89*sizeof(char));
}