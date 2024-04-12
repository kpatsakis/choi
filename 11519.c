void fun()
{
  int entity_3 = 88;
  char* entity_2;
  char entity_4[69] = "";
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'a', 69-1);
  entity_4[69-1]='0';
  strcpy(entity_2, entity_4);
}