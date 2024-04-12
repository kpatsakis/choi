void fun()
{
  char* entity_3;
  char entity_4[59] = "";
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'o', 59-1);
  entity_4[59-1]='0';
  strcpy(entity_3, entity_4);
}