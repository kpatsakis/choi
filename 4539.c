void fun()
{
  int entity_6 = 51;
  int entity_5 = 71;
  char entity_2[69] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_2, 'W', 69-1);
  entity_2[69-1]='';
  entity_6 = 64;
  strcpy(entity_3, entity_2);
}