void fun()
{
  int entity_0 = 24;
  int entity_8 = 72;
  char* entity_3;
  char entity_1[30] = "";
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'I', 30-1);
  entity_1[30-1]='0';
  memcpy(entity_3, entity_1, 30*sizeof(char));
}