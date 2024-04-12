void fun()
{
  int entity_8 = 70;
  char entity_2[74] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'E', 74-1);
  entity_2[74-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  strcpy(entity_3, entity_2);
}