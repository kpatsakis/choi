void fun()
{
  int entity_8 = 14;
  char entity_2[3] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'o', 3-1);
  entity_2[3-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_2);
}