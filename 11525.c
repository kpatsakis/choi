void fun()
{
  char entity_5[50] = "";
  char* entity_4;
  char* entity_2;
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[0]='0';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'S', 50-1);
  entity_5[50-1]='0';
  strcpy(entity_2, entity_5);
}