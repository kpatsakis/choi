void fun()
{
  int entity_3 = 85;
  char entity_7[65] = "";
  char* entity_2;
  memset(entity_7, 'f', 65-1);
  entity_7[65-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  entity_3 = 50;
  strcpy(entity_2, entity_7);
}