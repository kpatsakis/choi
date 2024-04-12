void fun()
{
  int entity_8 = 7;
  int entity_2 = 30;
  char entity_5[92] = "";
  char* entity_3;
  entity_3 = (char*)malloc(32*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'k', 92-1);
  entity_5[92-1]='0';
  strcpy(entity_3, entity_5);
}