void fun()
{
  int entity_6 = 55;
  int entity_1 = 68;
  int entity_5 = 90;
  char entity_9[28] = "";
  char* entity_3;
  memset(entity_9, 'u', 28-1);
  entity_9[28-1]='0';
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}