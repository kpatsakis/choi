void fun()
{
  int entity_2 = 97;
  int entity_8 = 9;
  entity_8 = 34;
  char entity_4[9] = "";
  char* entity_3;
  memset(entity_4, 'w', 9-1);
  entity_4[9-1]='0';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}