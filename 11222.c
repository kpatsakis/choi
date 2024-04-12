void fun()
{
  char entity_0[43] = "";
  char* entity_3;
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'o', 43-1);
  entity_0[43-1]='0';
  strcpy(entity_3, entity_0);
}