void fun()
{
  int entity_6 = 43;
  char* entity_7;
  char entity_2[27] = "";
  entity_2 = NULL;
  memset(entity_2, 'B', 27-1);
  entity_2[27-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_2);
}