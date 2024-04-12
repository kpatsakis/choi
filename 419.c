void fun()
{
  int entity_4 = 4;
  int entity_8 = 15;
  entity_4 = 23;
  char* entity_7;
  char entity_2[55] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_2, 'M', 55-1);
  entity_2[55-1]='';
  strcpy(entity_7, entity_2);
}