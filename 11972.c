void fun()
{
  char entity_3[75] = "";
  char* entity_2;
  memset(entity_3, 'b', 75-1);
  entity_3[75-1]='0';
  entity_2 = (char*)malloc(8*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_3);
}