void fun()
{
  int entity_6 = 85;
  entity_6 = 84;
  char* entity_3;
  char entity_2[88] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_7 = 'p';
  entity_3 = (char*)malloc(66*sizeof(char));
  entity_3[66-1]='';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_2, 'x', 88-1);
  entity_2[88-1]='';
  strcpy(entity_4, entity_2);
}