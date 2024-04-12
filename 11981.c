void fun()
{
  int entity_4 = 35;
  char entity_8[14] = "";
  char* entity_2;
  char* entity_9;
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[0]='0';
  memset(entity_8, 'z', 14-1);
  entity_8[14-1]='0';
  strcpy(entity_9, entity_8);
}