void fun()
{
  char* entity_2;
  char entity_9[85] = "";
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'e', 85-1);
  entity_9[85-1]='0';
  strcpy(entity_2, entity_9);
}