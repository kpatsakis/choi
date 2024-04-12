void fun()
{
  int entity_7 = 62;
  char entity_2[49] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'q', 49-1);
  entity_2[49-1]='0';
  memcpy(entity_1, entity_2, 49*sizeof(char));
}