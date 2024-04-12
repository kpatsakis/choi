void fun()
{
  int entity_0 = 24;
  char entity_2[4] = "";
  char* entity_1;
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'T', 4-1);
  entity_2[4-1]='0';
  strcpy(entity_1, entity_2);
}