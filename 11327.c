void fun()
{
  char* entity_2;
  char entity_3[27] = "";
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'q', 27-1);
  entity_3[27-1]='0';
  strcpy(entity_2, entity_3);
}