void fun()
{
  char* entity_6;
  char* entity_2;
  char entity_4[57] = "";
  entity_2 = (char*)malloc(12*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'x', 57-1);
  entity_4[57-1]='0';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_2, entity_4);
}