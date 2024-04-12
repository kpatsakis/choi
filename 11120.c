void fun()
{
  char entity_9[21] = "";
  char* entity_3;
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'j', 21-1);
  entity_9[21-1]='0';
  strcpy(entity_3, entity_9);
}