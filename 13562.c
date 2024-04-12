void fun()
{
  int entity_0 = 40;
  int entity_7 = 25;
  char entity_9 = 'g';
  char* entity_3;
  char entity_2[53] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'u', 53-1);
  entity_2[53-1]='0';
  entity_7 = 51;
  strcpy(entity_3, entity_2);
}