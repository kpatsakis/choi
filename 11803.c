void fun()
{
  char entity_2[73] = "";
  char* entity_3;
  char entity_6[8] = "";
  memset(entity_6, 'z', 8-1);
  entity_6[8-1]='0';
  memset(entity_2, 'i', 73-1);
  entity_2[73-1]='0';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_2);
}