void fun()
{
  int entity_8 = 37;
  int entity_0 = 37;
  char entity_2[9] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'q', 9-1);
  entity_2[9-1]='';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  strcpy(entity_3, entity_2);
}