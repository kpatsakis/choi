void fun()
{
  char entity_4[89] = "";
  char* entity_8;
  entity_8 = (char*)malloc(64*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'E', 89-1);
  entity_4[89-1]='0';
  memcpy(entity_8, entity_4, 89*sizeof(char));
}