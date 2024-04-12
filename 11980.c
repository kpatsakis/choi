void fun()
{
  int entity_2 = 62;
  char entity_3[10] = "";
  char* entity_7;
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'T', 10-1);
  entity_3[10-1]='0';
  strcpy(entity_7, entity_3);
}