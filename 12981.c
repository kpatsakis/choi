void fun()
{
  int entity_6 = 55;
  char entity_5[9] = "";
  char entity_1 = 'A';
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'N', 9-1);
  entity_5[9-1]='0';
  strcpy(entity_3, entity_5);
}