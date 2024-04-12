void fun()
{
  char entity_7[27] = "";
  char* entity_2;
  memset(entity_7, 'M', 27-1);
  entity_7[27-1]='0';
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_7);
}