void fun()
{
  char* entity_2;
  char entity_6[69] = "";
  char* entity_4;
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'q', 69-1);
  entity_6[69-1]='0';
  strcpy(entity_2, entity_6);
}