void fun()
{
  int entity_3 = 45;
  entity_3 = 4;
  char* entity_7;
  char entity_9[21] = "";
  memset(entity_9, 'P', 21-1);
  entity_9[21-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}