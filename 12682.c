void fun()
{
  int entity_8 = 34;
  char* entity_3;
  char entity_9[99] = "";
  memset(entity_9, 'N', 99-1);
  entity_9[99-1]='0';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}