void fun()
{
  int entity_7 = 75;
  char entity_2[6] = "";
  char* entity_3;
  memset(entity_2, 'B', 6-1);
  entity_2[6-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  entity_7 = 38;
  strcpy(entity_3, entity_2);
}