void fun()
{
  int entity_7 = 55;
  char entity_5[38] = "";
  char* entity_8;
  entity_8 = (char*)malloc(6*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'M', 38-1);
  entity_5[38-1]='0';
  strcpy(entity_8, entity_5);
}