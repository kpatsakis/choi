void fun()
{
  int entity_7 = 78;
  int entity_3 = 96;
  char* entity_8;
  char entity_1 = 'W';
  char entity_2[94] = "";
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'I', 94-1);
  entity_2[94-1]='0';
  strcpy(entity_8, entity_2);
}