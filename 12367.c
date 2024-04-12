void fun()
{
  int entity_2 = 2;
  int entity_6 = 26;
  char entity_0 = 'Z';
  char entity_5[63] = "";
  char* entity_1;
  memset(entity_5, 'Z', 63-1);
  entity_5[63-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_5);
}