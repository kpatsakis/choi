void fun()
{
  char entity_3[31] = "";
  char* entity_6;
  memset(entity_3, 'r', 31-1);
  entity_3[31-1]='0';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_3);
}