void fun()
{
  char entity_2[93] = "";
  char* entity_7;
  memset(entity_2, 'k', 93-1);
  entity_2[93-1]='0';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}