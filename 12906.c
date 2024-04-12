void fun()
{
  int entity_7 = 65;
  char entity_0[44] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'S', 44-1);
  entity_0[44-1]='0';
  memcpy(entity_1, entity_0, 44*sizeof(char));
}