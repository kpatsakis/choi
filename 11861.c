void fun()
{
  char entity_4[50] = "";
  char* entity_2;
  memset(entity_4, 'Z', 50-1);
  entity_4[50-1]='0';
  entity_2 = (char*)malloc(82*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_4);
}