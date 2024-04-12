void fun()
{
  char entity_2[4] = "";
  char* entity_4;
  entity_4 = (char*)malloc(94*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'S', 4-1);
  entity_2[4-1]='0';
  strcpy(entity_4, entity_2);
}