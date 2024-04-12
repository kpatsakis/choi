void fun()
{
  char* entity_3;
  char entity_9[68] = "";
  memset(entity_9, 'N', 68-1);
  entity_9[68-1]='0';
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}