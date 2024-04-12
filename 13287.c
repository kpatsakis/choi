void fun()
{
  int entity_3 = 28;
  int entity_7 = 43;
  int entity_6 = 65;
  char* entity_2;
  char entity_9[50] = "";
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'W', 50-1);
  entity_9[50-1]='0';
  entity_6 = 77;
  strcpy(entity_2, entity_9);
}