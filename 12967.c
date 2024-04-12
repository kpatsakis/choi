void fun()
{
  int entity_6 = 9;
  char entity_3 = 'e';
  char entity_2[89] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'p', 89-1);
  entity_2[89-1]='0';
  strcpy(entity_4, entity_2);
}