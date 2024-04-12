void fun()
{
  char entity_2[26] = "";
  entity_2 = NULL;
  char entity_9[71] = "";
  entity_9 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[73-1]='';
  memset(entity_9, 'w', 71-1);
  entity_9[71-1]='';
  memset(entity_2, 'U', 26-1);
  entity_2[26-1]='';
  strcpy(entity_7, entity_2);
}