void fun()
{
  int entity_5 = 92;
  char* entity_2;
  char entity_0 = 'c';
  char entity_3[87] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'X', 87-1);
  entity_3[87-1]='0';
  strcpy(entity_2, entity_3);
}