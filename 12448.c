void fun()
{
  int entity_4 = 33;
  char entity_2 = 'N';
  char entity_9[27] = "";
  char* entity_8;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'V', 27-1);
  entity_9[27-1]='0';
  strcpy(entity_8, entity_9);
}