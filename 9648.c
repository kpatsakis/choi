void fun()
{
  char entity_8[40] = "";
  entity_8 = NULL;
  char* entity_2;
  char entity_9[46] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', 46-1);
  entity_9[46-1]='';
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[1-1]='';
  memset(entity_8, 'Z', 40-1);
  entity_8[40-1]='';
  strcpy(entity_2, entity_9);
}