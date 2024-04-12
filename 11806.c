void fun()
{
  char* entity_3;
  char entity_9[21] = "";
  char entity_2 = 'L';
  memset(entity_9, 'L', 21-1);
  entity_9[21-1]='0';
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}