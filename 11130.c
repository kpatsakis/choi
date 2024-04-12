void fun()
{
  int entity_1 = 10;
  char entity_6[93] = "";
  char* entity_3;
  memset(entity_6, 'I', 93-1);
  entity_6[93-1]='0';
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_6);
}