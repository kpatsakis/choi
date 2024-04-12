void fun()
{
  char entity_3[35] = "";
  char* entity_2;
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'P', 35-1);
  entity_3[35-1]='0';
  strcpy(entity_2, entity_3);
}