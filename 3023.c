void fun()
{
  int entity_6 = 61;
  int entity_8 = 17;
  char* entity_1;
  char entity_0 = 'k';
  char entity_2[80] = "";
  entity_2 = NULL;
  memset(entity_2, 'y', 80-1);
  entity_2[80-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  strcpy(entity_1, entity_2);
}