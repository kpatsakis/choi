void fun()
{
  char* entity_7;
  char entity_3[14] = "";
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'y', 14-1);
  entity_3[14-1]='0';
  strcpy(entity_7, entity_3);
}