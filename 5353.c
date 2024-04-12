void fun()
{
  int entity_6 = 10;
  char* entity_2;
  char entity_4[5] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_4, 't', 5-1);
  entity_4[5-1]='';
  strcpy(entity_2, entity_4);
}