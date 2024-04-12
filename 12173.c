void fun()
{
  int entity_4 = 47;
  int entity_3 = 86;
  char entity_1[87] = "";
  char* entity_5;
  memset(entity_1, 'Q', 87-1);
  entity_1[87-1]='0';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_1);
}