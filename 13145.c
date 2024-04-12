void fun()
{
  int entity_3 = 60;
  int entity_4 = 91;
  int entity_2 = 90;
  entity_2 = 30;
  char entity_1[21] = "";
  char* entity_5;
  memset(entity_1, 'k', 21-1);
  entity_1[21-1]='0';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_1);
}