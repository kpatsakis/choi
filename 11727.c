void fun()
{
  int entity_0 = 17;
  char entity_1[75] = "";
  char* entity_2;
  memset(entity_1, 'G', 75-1);
  entity_1[75-1]='0';
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}