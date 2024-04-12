void fun()
{
  int entity_4 = 32;
  char entity_2[35] = "";
  entity_2 = NULL;
  char entity_6[25] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'w', 25-1);
  entity_6[25-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_2, 'v', 35-1);
  entity_2[35-1]='';
  strcpy(entity_7, entity_2);
}