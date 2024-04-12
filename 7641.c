void fun()
{
  int entity_3 = 9;
  char* entity_2;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'o', entity_3-1);
  entity_6[entity_3-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  strcpy(entity_2, entity_6);
}