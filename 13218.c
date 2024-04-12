void fun()
{
  int entity_6 = 80;
  char entity_2[99] = "";
  char entity_7[69] = "";
  char* entity_1;
  memset(entity_7, 'T', 69-1);
  entity_7[69-1]='0';
  memset(entity_2, 'X', 99-1);
  entity_2[99-1]='0';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[0]='0';
  entity_6 = 58;
  strcpy(entity_1, entity_7);
}