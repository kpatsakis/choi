void fun()
{
  char* entity_1;
  char entity_2[16] = "";
  memset(entity_2, 'P', 16-1);
  entity_2[16-1]='0';
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_2);
}