void fun()
{
  int entity_4 = 88;
  char* entity_2;
  char entity_7[43] = "";
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'B', 43-1);
  entity_7[43-1]='0';
  strcpy(entity_2, entity_7);
}