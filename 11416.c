void fun()
{
  char entity_3[47] = "";
  char* entity_9;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'Z', 47-1);
  entity_3[47-1]='0';
  strcpy(entity_9, entity_3);
}