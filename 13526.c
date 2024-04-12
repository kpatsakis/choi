void fun()
{
  int entity_0 = 28;
  char entity_2[54] = "";
  char* entity_1;
  memset(entity_2, 'C', 54-1);
  entity_2[54-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  entity_0 = 12;
  strcpy(entity_1, entity_2);
}