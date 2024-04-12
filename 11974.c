void fun()
{
  char entity_1[70] = "";
  char* entity_6;
  entity_6 = (char*)malloc(39*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'Z', 70-1);
  entity_1[70-1]='0';
  strcpy(entity_6, entity_1);
}