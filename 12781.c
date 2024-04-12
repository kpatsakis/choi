void fun()
{
  int entity_3 = 54;
  char entity_4 = 'U';
  char entity_2[89] = "";
  char* entity_5;
  memset(entity_2, 'z', 89-1);
  entity_2[89-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_2, 89*sizeof(char));
}