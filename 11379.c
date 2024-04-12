void fun()
{
  int entity_1 = 12;
  char* entity_2;
  char entity_8[93] = "";
  char entity_7 = 'x';
  memset(entity_8, 'n', 93-1);
  entity_8[93-1]='0';
  entity_2 = (char*)malloc(27*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, 93*sizeof(char));
}