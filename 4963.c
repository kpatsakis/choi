void fun()
{
  int entity_7 = 20;
  int entity_5 = 96;
  char entity_4[20] = "";
  entity_4 = NULL;
  char entity_6 = 'U';
  char* entity_2;
  memset(entity_4, 'X', 20-1);
  entity_4[20-1]='';
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[1-1]='';
  strcpy(entity_2, entity_4);
}