void fun()
{
  int entity_5 = 38;
  char entity_1[62] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'F', 62-1);
  entity_1[62-1]='0';
  entity_5 = 25;
  strcpy(entity_7, entity_1);
}