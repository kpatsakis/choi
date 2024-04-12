void fun()
{
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'o', 97-1);
  entity_2[97-1]='';
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  strcpy(entity_7, entity_2);
}