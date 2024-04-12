void fun()
{
  int entity_1 = 86;
  int entity_4 = 87;
  char entity_7[94] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'F', 94-1);
  entity_7[94-1]='0';
  entity_4 = 90;
  strcpy(entity_5, entity_7);
}