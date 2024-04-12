void fun()
{
  char entity_1[62] = "";
  char* entity_3;
  memset(entity_1, 'b', 62-1);
  entity_1[62-1]='0';
  entity_3 = (char*)malloc(60*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}