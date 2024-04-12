void fun()
{
  char entity_2[94] = "";
  char entity_5 = 't';
  char* entity_7;
  memset(entity_2, 'y', 94-1);
  entity_2[94-1]='0';
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}