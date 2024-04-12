void fun()
{
  char entity_3[62] = "";
  char* entity_4;
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'T', 62-1);
  entity_3[62-1]='0';
  strcpy(entity_4, entity_3);
}