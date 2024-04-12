void fun()
{
  int entity_9 = 57;
  int entity_7 = 95;
  char entity_8 = 'O';
  char* entity_2;
  char entity_1[72] = "";
  memset(entity_1, 'Y', 72-1);
  entity_1[72-1]='0';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}