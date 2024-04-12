void fun()
{
  char entity_6 = 'o';
  char entity_2[31] = "";
  entity_2 = NULL;
  char* entity_9;
  char entity_8[72] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memset(entity_8, 'R', 72-1);
  entity_8[72-1]='';
  memset(entity_2, 'w', 31-1);
  entity_2[31-1]='';
  strcpy(entity_9, entity_2);
}