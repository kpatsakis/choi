void fun()
{
  char entity_8[79] = "";
  char* entity_9;
  memset(entity_8, 'T', 79-1);
  entity_8[79-1]='0';
  entity_9 = (char*)malloc(73*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_8);
}