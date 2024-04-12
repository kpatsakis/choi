void fun()
{
  int entity_8 = 66;
  char entity_2[12] = "";
  char* entity_1;
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'w', 12-1);
  entity_2[12-1]='0';
  strcpy(entity_1, entity_2);
}