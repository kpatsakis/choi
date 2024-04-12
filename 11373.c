void fun()
{
  char entity_9[2] = "";
  char* entity_3;
  memset(entity_9, 'u', 2-1);
  entity_9[2-1]='0';
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}