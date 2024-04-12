void fun()
{
  char* entity_2;
  char entity_4 = 'h';
  char entity_3[54] = "";
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'g', 54-1);
  entity_3[54-1]='0';
  strcpy(entity_2, entity_3);
}