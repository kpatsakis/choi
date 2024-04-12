void fun()
{
  int entity_6 = 80;
  char entity_2[75] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 't', 75-1);
  entity_2[75-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  strcpy(entity_3, entity_2);
}