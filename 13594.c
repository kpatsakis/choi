void fun()
{
  int entity_0 = 42;
  entity_0 = 76;
  char entity_1[20] = "";
  char* entity_7;
  char entity_8 = 'g';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'A', 20-1);
  entity_1[20-1]='0';
  memcpy(entity_7, entity_1, 20*sizeof(char));
}