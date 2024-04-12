void fun()
{
  int entity_4 = 2;
  entity_4 = 37;
  char* entity_9;
  char entity_0 = 'Y';
  char entity_3[62] = "";
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'A', 62-1);
  entity_3[62-1]='0';
  strcpy(entity_9, entity_3);
}