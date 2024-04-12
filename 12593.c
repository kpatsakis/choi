void fun()
{
  int entity_8 = 90;
  char entity_3[41] = "";
  char entity_9[11] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'k', 41-1);
  entity_3[41-1]='0';
  memset(entity_9, 'a', 11-1);
  entity_9[11-1]='0';
  strcpy(entity_2, entity_3);
}