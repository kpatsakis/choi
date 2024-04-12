void fun()
{
  int entity_6 = 64;
  char* entity_4;
  char entity_2[7] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_2, 'g', 7-1);
  entity_2[7-1]='';
  entity_6 = 19;
  strcpy(entity_4, entity_2);
}