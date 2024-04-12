void fun()
{
  char* entity_7;
  char entity_9[62] = "";
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'R', 62-1);
  entity_9[62-1]='0';
  strcpy(entity_7, entity_9);
}