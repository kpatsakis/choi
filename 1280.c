void fun()
{
  int entity_4 = 96;
  char entity_2[48] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_1[47] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_2, 'M', 48-1);
  entity_2[48-1]='';
  memset(entity_1, 'M', 47-1);
  entity_1[47-1]='';
  strcpy(entity_3, entity_2);
}