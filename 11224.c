void fun()
{
  char entity_5[36] = "";
  char* entity_6;
  memset(entity_5, 'S', 36-1);
  entity_5[36-1]='0';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_5);
}