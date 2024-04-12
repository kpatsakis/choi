void fun()
{
  int entity_3 = 10;
  char entity_6[27] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'Z', 27-1);
  entity_6[27-1]='0';
  strcpy(entity_4, entity_6);
}