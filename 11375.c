void fun()
{
  int entity_0 = 45;
  int entity_9 = 91;
  char entity_1[62] = "";
  char* entity_2;
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'M', 62-1);
  entity_1[62-1]='0';
  strcpy(entity_2, entity_1);
}