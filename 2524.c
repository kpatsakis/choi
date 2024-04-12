void fun()
{
  int entity_6 = 10;
  char entity_3 = 'k';
  char* entity_2;
  char entity_8[78] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_8, 'P', 78-1);
  entity_8[78-1]='';
  strcpy(entity_2, entity_8);
}