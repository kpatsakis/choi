void fun()
{
  char* entity_2;
  char entity_4[10] = "";
  entity_2 = (char*)malloc(14*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 't', 10-1);
  entity_4[10-1]='0';
  strcpy(entity_2, entity_4);
}