void fun()
{
  int entity_3 = 60;
  char entity_5[69] = "";
  char entity_4 = 'g';
  char* entity_1;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'i', 69-1);
  entity_5[69-1]='0';
  strcpy(entity_1, entity_5);
}