void fun()
{
  char* entity_2;
  char entity_1[15] = "";
  memset(entity_1, 'z', 15-1);
  entity_1[15-1]='0';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}