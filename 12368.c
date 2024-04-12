void fun()
{
  int entity_0 = 85;
  char* entity_7;
  char entity_4 = 'C';
  char entity_9[26] = "";
  memset(entity_9, 'R', 26-1);
  entity_9[26-1]='0';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}