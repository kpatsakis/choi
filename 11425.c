void fun()
{
  int entity_4 = 54;
  char entity_9[92] = "";
  char entity_8 = 'W';
  char* entity_3;
  memset(entity_9, 'k', 92-1);
  entity_9[92-1]='0';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}