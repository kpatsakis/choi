void fun()
{
  char entity_9[47] = "";
  char* entity_2;
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'd', 47-1);
  entity_9[47-1]='0';
  strcpy(entity_2, entity_9);
}