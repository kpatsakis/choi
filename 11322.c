void fun()
{
  char entity_1[100] = "";
  char entity_8 = 'E';
  char* entity_2;
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'L', 100-1);
  entity_1[100-1]='0';
  strcpy(entity_2, entity_1);
}